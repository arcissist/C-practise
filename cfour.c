//打印出2~100中所有的素（质） 
//

#include <stdio.h>
int main( int argc, const char * argv[] )
{
	int num = 0, i = 0;
	printf( "All of the primes in 2~100 are:" );
	for( num=2; num<=100; num++ )
	{
		for( i=2; i<=num; i++ )
		{
			if( num%i == 0 )
			{
				if( num == i )
				{
					printf( "%d  ", num ); 
				}
				else
				{
					break;
				}
			}
		}
	}
	printf( "\n" );
	return 0;
}
