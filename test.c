#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <memory.h>

#define LINE 3
#define ROW 3
int main(int argc, const char * argv[])
{
	int 	a[LINE][ROW];
        int	i = 0, j = 0;
	srand( time(NULL) );
	for( i=0; i<LINE; i++ )
	{
		for( j=0; j<ROW; j++ )
		{
			a[i][j] = rand()%100;
			printf( "%-3d", a[i][j] );
		}
		printf( "\n" );
	}
	printf( "Output element a[1][1]:\n" );
	printf( "*(*a+5)=%d *(*a+5)=%d \n", *(*a+5), *(a+1)[1] );
	return 0;
}
