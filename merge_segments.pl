use strict;
use warnings;
use Data::Dumper;

our %variables;
sub variables
{
    open IN,'variables.txt';
    while(<IN>){
	#if (/^[]\s+/);
	my @d = split(/\s+/);
	#warn join("|",@d);
	$variables{$d[0]}=$d[1];
	#die Dumper(\%variables);
    }
    close IN;
    return \%variables;
}

our %segments;
sub segments{
    open IN,'segments.txt' or die;
    while(<IN>){
	if (/\s+(0x[a-fA-F0-9]+)\s\-\s+(0x[a-fA-F0-9]+)\s+is\s+([\w\.]+)/)
	{
	    #warn "$_";
	    $segments{$3}{from}=$1;
	    $segments{$3}{to}=$2;
	    #die Dumper(\%segments);
	}
	elsif (/Symbols from \"(.+)\"/){
	    #warn "file $1";
	}
	elsif (/Local core dump file:/) {

	}
	elsif(/\`(.+)\', file type elf64-x86-64./) {
	    #warn "file $1";
	}
	elsif(/Entry point: (.+)/){}
	elsif(/Local exec file:/){}
	else
	{
	    die "Could not parse $_";
	}
    }
    close IN;
    return \%segments;
}


segments;
variables;
no warnings 'portable';  # Support for 64-bit ints required
for my $k (keys %variables) {
    my $n = $variables{$k};
    for my $s (keys %segments) {
	my $sg = $segments{$s};
	my $f = hex($sg->{from});
	my $t = hex($sg->{to});
	if ($f > $t) {
	    my $p = $t;
	    $t = $f;
	    $f = $p;
	}
	my $v = hex($k);
	if (	    
	    ($f ge $v) &&
	    ($t le $v)
	    ) {
	    
	    print "FOUND: ${k}\-\>${v}\t$n\t$f\t$t\t$s\n";
	}
	else
	{
	    print "No $k\-\>${v}\t$n\t$f\t$t\t$s\n";
	}
    }
    
}
