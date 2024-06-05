#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, const char * argv[])
{
	int a[3][3] = {};
	int i = 0, j = 0, max = 0;
	srand(time(NULL));
	for( i=0; i<3; i++ )
	{
		for( j=0; j<3; j++ )
		{
			a[i][j] = rand()%100;
			printf( "%-3d", a[i][j] );
		}
		printf( "\n" );
	}
	max = a[0][0];
	for( i=0; i<3; i++ )
	{
		for( j=0; j<3; j++ )
		{
			if( max<a[i][j] )
				max = a[i][j];
		}
	}
	printf( "\nThe largest value in the array is:%d\n", max );
	return 0;
}
