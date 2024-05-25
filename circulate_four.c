#include <stdio.h>
int main(int argc, const char * argv[])
{
	int sum = 0, symbol = 0, add = 0;
	for( sum=0, symbol=1, add=1; add<=100; add++)
	{
		sum += add * symbol;
		symbol *= -1;
	}
	printf("1-2+3-4+...+99-100=%d\n", sum);
	return 0;
}
