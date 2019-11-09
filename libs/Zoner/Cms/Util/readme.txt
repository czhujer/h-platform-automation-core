example console use:


php console.php <action name> <parameter 1> <parameter 2> ...


Working actions:
1) Error messages array generator
Will process error description file and generate file with an PHP array of message to /MessagesGenerator/Temp folder

<source filename> source file located in /MessagesGenerator/Mdesc folder
<source encoding> source file encoding - 

php console.php generateErrorMessages  <source filename> <source encoding>
php console.php generateErrorMessages zeet.mdesc.h windows-1250
