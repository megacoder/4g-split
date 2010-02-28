#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int
main(
	int		argc,
	char * *	argv
)
{
	long long	ll;

	for( ll = 0; malloc( 1024 * 1024 ); ++ll );
	printf( "%g Gb\n", ll / 1e6 );
	exit( 0 );
}
