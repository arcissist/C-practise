#include <stdio.h>
int main(int argc, const char * argv[])
{
	int a[10];
	int i = 0, maxi = 0;
	printf( "Please enter the ten integers:" );
	for( i=0; i<10; i++ )
	{
		scanf( "%d", &a[i] );
	}
	for( i=0; i<10; i++ )
	{
		if( a[i]>a[maxi] )
			maxi = i;
	}
	printf( "The subscript for the largest element in the element is:%d\n", maxi );
	return 0;
}
