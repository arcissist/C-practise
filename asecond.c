#include <stdio.h>
int main(int argc, const char * argv[])
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int i = 0;
	for( i=0; i<5; i++ )
	{
		printf( "%d", a[i] );
		if( i<4 )
		{
			printf( "," );
		}
	}
	printf( "\n" );
	return 0;
}
