#include <stdio.h>
int main(int argc, const char * argv[])
{
	int i=0, j=0;
	for( i=1, j=1; i<=9; i++)
	{
		for( j=1; j<=i; j++)
		{
			printf("%d*%d=%-2d  ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}