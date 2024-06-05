#include <stdio.h>
int main(int argc, const char * argv[])
{
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int i = 0, j = 0;
	for( i=2; i>=0; i--)
	{
		for( j=2; j>=0; j-- )
		{
			printf( "%-3d", a[i][j] );
		}
		printf( "\n" );
	}
	return 0;
}
