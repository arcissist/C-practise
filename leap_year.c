#include <stdio.h>
int main(int argc, const char * argv[])
{
	int	year = 0;
	scanf("%d",&year);
	if( year%400==0 || year%4==0 && year%100!=0)
		printf("leap year\n");
	return 0;
}
