#include <stdio.h>
int main(int argc, const char * argv[])
{
	int sum = 0, add = 0;
	for( ; add<100 ; add+=3)
	{
		sum += add;
	}	
	printf("The sum of multiples of three within 100:%d\n", sum);
	return 0;
}
