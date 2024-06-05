#include <stdio.h>
int main(int argc, const char * argv[])
{
	int a[10];
	int i = 0;
	printf( "Please enter the ten integers:" );
	for( i=0; i<10; i++ )
	{
		scanf( "%d", &a[i] );
	}
	for( i=2; i<9; i++ )
	{
		a[i] = a[i+1];
	}
	printf( "The processed sequences:" );
	for( i=0; i<10; i++ )
	{
		printf( "%d ", a[i] );
	}
	printf( "\n" );
	return 0;
}
