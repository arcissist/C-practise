#include <stdio.h>
int main(int argc, const char * argv[])
{
	int arr1[2][3] = {1,2,3,4,5,6};
	int arr2[2][3] = {10,20,30,40,50,60};
	int sum[2][3] = {};
	int i=0, j=0;
	for( i=0; i<2; i++ )
	{
		for( j=0; j<3; j++ )
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
			printf( "%-4d", arr1[i][j] );
		}
		printf( "\n" );
	}
	for( i=0; i<2; i++ )
	{
		for( j=0; j<3; j++ )
		{
			printf( "%-4d", arr2[i][j] );
		}
		printf( "\n" );
	}
	for( i=0; i<2; i++ )
	{
		for( j=0; j<3; j++ )
		{
			printf( "%-4d", sum[i][j] );
		}
		printf( "\n" );
	}
	return 0;
}
