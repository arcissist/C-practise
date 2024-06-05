#include <stdio.h>
int main(int argc, const char * argv[])
{
	int a[10], e[10], o[10];
	int i = 0, j = 0, swap = 0, en = 0, on = 0;
	printf( "Pleasae enter the ten integers:" );
	for( i=0; i<10; i++ )
	{
		scanf( "%d", &a[i] );
		if( a[i]%2 == 0 )
		{
			e[en] = a[i];
			en++;
		}
		else
		{
			o[on] = a[i];
			on++;
		}
	}
	for( j=0; j<en-1; j++)
	{
		for( i=0; i<en-1-j; i++ )
		{
			if( e[i] > e[i+1] )
			{
				swap = e[i];
				e[i] = e[i+1];
				e[i+1] = swap;
			}
		}
	}
	for( j=0; j<on-1; j++)
	{
		for( i=0; i<on-1-j; i++ )
		{
			if( o[i] > o[i+1] )
			{
				swap = o[i];
				o[i] = o[i+1];
				o[i+1] = swap;
			}
		}
	}
	for( i=0; i<on; i++ )
	{
		a[i] = o[i];
	}
	for( i=on; i<10; i++ )
	{
		a[i] = e[i-on];
	}
	for( i=0; i<10; i++ )
	{
		printf( "%d ", a[i] );
	}
	printf( "\n" );
	return 0;
}
