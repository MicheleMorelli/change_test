#! /usr/bin/perl -w

use strict;

my @c_or_p = qw/100 50 20 10 5 2 1 .5 .2 .1 .05 .02 .01/;
my ($to_be_paid, $coin_used) = @ARGV;

$coin_used -= $to_be_paid;
for (@c_or_p) {
    while (($coin_used - $_) >= 0){
        $coin_used-= $_;
        print "$_\n"; 
        }
}
