#include <stdio.h>
int main(int agrc, const char * argv[])
{
	int a[10];
	int tem = 0, i = 0;;
	printf( "Please enter the ten integers:" );
	for( i=0; i<10; i++ )
	{
		scanf( "%d", &a[i] );
	}
	tem = a[9];
	for( i=9; i>=0; i-- )
	{
		a[i] = a[i-1];
	}
	a[0] = tem;
	printf( "After moving:" );
	for( i=0; i<10; i++ )
		printf( "%d ", a[i] );
	printf( "\n" );
	return 0;
}
