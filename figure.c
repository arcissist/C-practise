#include <stdio.h>
int main(int argc, const char * argv[])
{
	int i = 0, j = 0;
	for( i = 1; i<10; i++)
	{
		for( j=i; j<10; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
