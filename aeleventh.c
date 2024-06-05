#include <stdio.h>
int main(int argc, const char * argv[])
{
	int a[10] = { 0 };
	int i = 0;
	printf( "Please enter the nine integers:" );
	
	{
		scanf( "%d", &a[i] );
	}
	for( i=9; i>4; i-- )
	{
		a[i] = a[i-1];
	}
	a[4] = 23;
	for( i=0; i<10; i++ )
		printf( "%d ", a[i] );
	printf( "\n" );

	return 0;
}
