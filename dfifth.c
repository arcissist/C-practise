#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LINE 3	//行
#define ROW 3	//列
int main(int argc, const char * argv[])
{
	int a[LINE][ROW] = {}, sl[LINE] , sr[ROW];
	int i = 0, j = 0, dsum = 0;
       	double	dave = 0, lv[LINE], rv[ROW];
	srand(time(NULL));
	printf( "Arrays before sorting:\n" );
	for( i=0; i<LINE; i++ )
	{
		for( j=0, sl[i]=0; j<3; j++ )
		{
			a[i][j] = rand()%100;
			printf( "%-3d", a[i][j] );
			dsum += a[i][j];
			sl[i] += a[i][j];
		}
		lv[i] = sl[i]/(double)(LINE);
		printf( "\n" );
	}
	dave = (double)(dsum)/(LINE*ROW);
	for( j=0; j<ROW; j++ )
	{
		for( i=0, sr[j]=0; i<LINE; i++ )
		{
			sr[j] += a[i][j];
		}
		rv[j] = sr[j]/ROW/1.0;
	}
	
	printf( "	总和	平均值\n" );
	printf( "数组	%-3d	%g\n", dsum, dave);
	for( i=0; i<3; i++ )
	{
		printf( "第%d行:	%-3d	%g\n", i+1, sl[i], (double)(sl[i])/3 );
	}
	for( i=0; i<3; i++ )
	{
		printf( "第%d列:	%-3d	%g\n", i+1, sr[i], (double)(sr[i])/3 );
	}
	return 0;
}
