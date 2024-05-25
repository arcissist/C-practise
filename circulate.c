#include <stdio.h>
int main(int argc, const char * argv[])
{
	int sum = 0, i = 0;
	while( i<=100 )
	{
		sum+=i;
		i++;
	}
	printf("sum=%d\n",sum);
	return 0;
}
