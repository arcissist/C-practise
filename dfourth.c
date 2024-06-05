#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, const char * argv[])
{
	int a[3][3] = {};
	int i = 0, j = 0, tem = 0, flag = 0, st = 0;
	srand(time(NULL));
	printf( "Arrays before sorting:\n" );
	for( i=0; i<3; i++ )
	{
		for( j=0; j<3; j++ )
		{
			a[i][j] = rand()%100;
			printf( "%-3d", a[i][j] );
		}
		printf( "\n" );
	}
	for( st=0; st<8; st++ ) 
	{
		for( i=0; i<3*3-st-1; i++ )
		{
			if( *(*a+i) > *(*a+i+1) )
			{
				tem = *(*a+i);
				*(*a+i) = *(*a+i+1);
				*(*a+i+1) = tem;
				flag = 1;
			}
		}
		if( flag == 1 )
			flag = 0;
		else
			break;
	}
	printf( "The ordered array:\n" );
	for( i=0; i<3; i++ )
	{
		printf( "		" );
		for( j=0; j<3; j++ )
		{
			printf("%-3d", a[i][j]);
		}
		printf( "\n" );
	}
	return 0;
}
