//打印从1900~2014年份中所有闰年年份
//
#include <stdio.h>
int main(int argc, const char * argv[])
{
	int year = 0;
	printf( "All leap years 1900~2014:" );
	for( year=1900; year<=2014; year++ )
	{
		if( year%4 == 0 && year%100 != 0 || year%400 == 0 )
		{
			printf( "%d  ", year );
		}
	}
	printf( "\n" );
	return 0;
}
