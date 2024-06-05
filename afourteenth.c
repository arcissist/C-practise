#include <stdio.h>
int main(int argc,const char * argv[])
{
	int a[10];
	int i = 0, max = 0, maxi = 0;
	printf( "Please enter the ten integers:" );
	for( i=0; i<10; i++ )
	{
		scanf( "%d", &a[i] );
	}
	max = a[0] + a[1] + a[2];
	maxi = 0;
	for( i=0; i<8; i++ )
	{
		if( max < a[i]+a[i+1]+a[i+2] )
		{
			max = a[i]+a[i+1]+a[i+2];
			maxi = i;
		}
	}
	printf( "The element and the largestsubarray are:{%d,%d,%d}\n", a[maxi], a[maxi+1], a[maxi+2] );
	return 0;
}
