//打印图形
#include <stdio.h>
int main(int argc, const char * argv[])
{
	int i = 0, j = 0, k = 0;
	for( i=1; i<=3; i++ )
	{
		for( j=3-i; j>0; j-- )
		{
			printf( " " );
		}
		for( k=i*2-1; k>0; k--)
		{
			printf( "*" );
		}	
		printf( "\n" );
	}
	return 0;
}
