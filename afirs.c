#include <stdio.h>
int main(int argc, const char * argv[])
{
	int a[6] = { 0 };
	int i = 0;
	a[0] = 2;
	for( i=1; i<6; i++ )
	{
		a[i] = a[i-1] + 2;
	}
	for( i=0; i<6; i++ )
	{
		printf( "%d ", a[i] );
	}
	printf( "\n" );
	return 0;
}
