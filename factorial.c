//求一个数的阶乘

#include <stdio.h>
int main(int argc, const char * argv[])
{
	int num = 0;
	int fac = 0, mul = 0;
	printf( "Please enter a posistive integer:" );
	scanf( "%d", &num );
	if( num<=0 )
	{
		printf( "The input is wrong, and it must be an integer greater than zero.\n" );
	}
	else
	{
		for( mul=num, fac=1; mul >= 1; mul-- )
		{
			fac*=mul;
		}
		printf( "%d!=%d\n", num, fac);
	}
	return 0;
}
