#include <stdio.h>
int main(int argc, const char * argv[])
{
	int i=0, sum=0;
	do
	{
		sum+=i;
		i++;
	}while(i<=100);	
	printf("1+2+3+...+100=%d\n", sum);
	return 0;
}
