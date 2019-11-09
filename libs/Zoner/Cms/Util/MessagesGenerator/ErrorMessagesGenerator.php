<?php

namespace Zoner\Cms\Util\MessagesGenerator;

class ErrorMessagesGenerator {

    private $mdescDir = __DIR__ . '/Mdesc';
    private $tempDir = __DIR__ . '/Temp';
    private $inputEncoding = null;
    private $outputEncoding = 'utf-8';
    private $messages = array();
    private $errorLines = array();

    function __construct($mdescFile, $inputEncoding = 'iso-8859-2') {


        $this->inputEncoding = $inputEncoding;
        mb_internal_encoding($this->outputEncoding);

        $sourceFile = $this->mdescDir . '/' . $mdescFile;

        $file = fopen($sourceFile, 'r');
        $rowNumber = 1;
        while ($line = fgets($file)) {

            preg_match('/\(.*_resp.*\)/', $line, $matches);

            if (isset($matches[0])) {
                try {
                    $this->parseLine($matches[0]);
                } catch (\Exception $e) {
                    $this->errorLines[$rowNumber] = $e->getMessage();
                }
            }

            $rowNumber++;
        }

        fclose($file);

        echo "\n\nInput encoding is " . $this->inputEncoding, "\n\n";

        echo "\nFound " . sizeof($this->messages) . ' error messages in ' . $sourceFile . "\n\n";

        if (!empty($this->errorLines)) {
            echo \sizeof($this->errorLines) . " lines failed:\n";

            foreach ($this->errorLines as $index => $error) {
                echo 'Line ' .  $index . ': ' . $error . "\n";
            }

            echo "\n";
        }

        //var_dump($this->messages);
        $this->createFile($mdescFile);
    }

    private function parseLine($line) {  
        // parse message code
        preg_match('/(\d+\,){3}\d{5}/', $line, $c);

        if (empty($c[0])) {
            throw new \Exception("Code parse failed");
        }

        $code = $this->getErrorCode($c[0]);

        if (!$code) {
            // accept only error cides
            return;
        }

        // parse message text
        preg_match('/\".*\"/', $line, $m);
      
        if (empty($m[0])) {
            throw new \Exception("Message parse failed");
        }

        $message = $m[0];


        // parse message name
        $parts = \preg_split('/\,\s*/', $line);

        if (empty($parts[2])) {
            throw new \Exception('Message name parse failed');
        }

        $name = $parts[2];


        $name = $parts[2];

        $errorCode = str_replace(',', ':', $code);

        if ($errorCode) {
            $this->messages[$errorCode] = array(
                'code' => $errorCode,
                'name' => $this->sanitizeText($name),
                'message' => $this->sanitizeText($message)
            );
        }
    }

    private function getErrorCode($codeString) {
        $parts = explode(',', $codeString);

        if (\sizeof($parts) !== 4) {
            throw new \Exception("Error code getter failed");
        }

        $code = \intval($parts[3]);
        
        if(!$code || $code >= 60000 ){
            throw new \Exception(\sprintf('Invalid parsed code value: %s', $code));    
        }

        // keep only error code messages
        if (!$code || $code >= 50000) {
            return null;
        }


        return '' . $parts[0] . ':' . $parts[1] . ':' . $parts[2] . ':' . $parts[3];
    }

    private function createFile($mdescFile) {
        $fileName = str_replace('.', '_', $mdescFile);
        $path = $this->tempDir . '/' . $fileName . '_errors_output.php';



        $newFile = fopen($path, 'w+');

        fputs($newFile, "<?php\nclass Errors {\n\n#copy \$_errors to module file\n protected \$_errors = " . var_export($this->messages, true) . ";\n}\n?>");

        fclose($newFile);

        echo "Error messages file created: " . $path . "\n\n";
    }

    private function sanitizeText($text) {

        $text = \iconv($this->inputEncoding, $this->outputEncoding, $text);


        //echo mb_substr($msg, 0, 1);
        if (mb_substr($text, 0, 1) === '"') {
            $text = mb_substr($text, 1);
            //echo $msg;
        }

        $lastChar = mb_substr($text, -1);


        while (in_array($lastChar, array(')', '"', '.', ' '))) {
            $text = mb_substr($text, 0, -1);

            $lastChar = mb_substr($text, -1);
        }

        return $text;
    }

}
