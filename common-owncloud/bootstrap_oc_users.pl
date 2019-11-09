#!/usr/bin/perl

#
# Docs
#
# https://github.com/ingydotnet/json-bash
# https://github.com/0k/shyaml
# http://search.cpan.org/~ingy/YAML-Perl-0.02/lib/YAML/Perl.pod
# https://docs.puppetlabs.com/hiera/1/complete_example.html
# https://docs.puppetlabs.com/hiera/1/configuring.html#example-config-file
# http://search.cpan.org/dist/YAML-Tiny/lib/YAML/Tiny.pm
# http://search.cpan.org/~neilb/Crypt-RandPasswd-0.06/lib/Crypt/RandPasswd.pm

use strict;

use YAML::Tiny;

use Crypt::RandPasswd;

use Digest::SHA1 qw(sha1 sha1_hex);

my $gen_pass_min_len = int(5);
my $gen_pass_max_len = int(6);

#load fqdn
my $users_count = int($ARGV[0]);

my $users_admin_count = int($ARGV[1]);

if ($users_count == 0 and $users_admin_count == 0){
  print "Zero counts of both variables.. Exiting..\n";
  exit 0;
}

# example command
# sudo -u apache OC_PASS="''q2e" php /var/www/html/owncloud/occ user:add hujer2 --password-from-env

for (my $i=1; $i <= $users_count; $i++) {
  if ($i == 1){
    print "generating ".$users_count." regular users..\n";
  }

  my $p_word = Crypt::RandPasswd->word( $gen_pass_min_len, $gen_pass_max_len );
  my $p_num = Crypt::RandPasswd->rand_int_in_range(1000,8999);

  my $password = $p_word.$p_num;
  my $username="ocuser".$i;

  print $username."\t\t".$password."\n";

  my @args = ("sudo", "-u", "apache", "OC_PASS=${password}", "php", "/var/www/html/owncloud/occ", "user:add", $username, "--password-from-env");
  system(@args) == 0
      or print "system \"\"@args\"\" failed: $? \n";

}

for (my $i=1; $i <= $users_admin_count; $i++) {
  if ($i == 1){
    print "generating ".$users_admin_count." admin users..\n";
  }

  my $p_word = Crypt::RandPasswd->word( $gen_pass_min_len, $gen_pass_max_len );
  my $p_num = Crypt::RandPasswd->rand_int_in_range(1000,8999);

  my $password = $p_word.$p_num;
  my $username="ocadmin".$i;

  print $username."\t\t".$password."\n";

  my @args = ("sudo", "-u", "apache", "OC_PASS=${password}", "php", "/var/www/html/owncloud/occ", "user:add", $username, "-g", "admin", "--password-from-env");
  system(@args) == 0
      or print "system \"\"@args\"\" failed: $? \n";

}
