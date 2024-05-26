#include <stdio.h>
int main( int argc, const char * argv[] )
{
	int in = 0, i = 0;
	printf( "Please enter an integer:" );
	scanf( "%d", &in );
	for ( i = 1; i<=100; i++ )
	{
		if ( in % i == 0 )
			printf ( "%d ", i );
		else
			continue;
	}
	return 0;
}
