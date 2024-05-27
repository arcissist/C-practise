#include <stdio.h>
int main(int argc, const char * argv[])
{
	int num = 0;
	int i = 1, max = 0;
	printf( "Please enter the six positive integers:" );
	do{
		scanf( "%d", &num );
		i++;
		if( i == 1 )
			max = num;
		if( max<num )
		{
			max = num;	
		}
	}while( i<=6 );
	printf( "The largest number is:%d\n", max );
	return 0;
}
