//判断数字是不是水仙花数
#include <stdio.h>
int main(int argc, const char * argv[])
{
	int num = 0;
	int unit = 0, hun = 0, kil = 0;
	printf("Please enter an integer:");
	scanf("%d", &num);
	if( num>=1000 || num<=99 )
		printf( "The number %d is not a daffodils count\n", num );
	else
	{
		unit = num / 100;
		hun = num / 10 % 10;
		kil = num % 10;
		if( unit*unit*unit + hun*hun*hun + kil*kil*kil ==num )
		{
			printf( "The number %d is a daffodils count\n", num );
		}
		else
		{
			printf( "The number %d is not a daffodils count\n", num );
		}
	}
	return 0;
}
