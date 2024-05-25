#include <stdio.h>
int main(int argc, const char * argv[])
{
	int sum = 0, add = 0;
	for ( sum=0, add=0; add<100; add+=2)
	{
		sum+=add;
	}
	printf("The sum of even numbers within 100: %d\n", sum);
	return 0;
}
