#include <stdio.h>
int main(int argc, const char * argv[])
{
	int 	number1 = 0, number2 = 0;
	printf("输入两个整数：");
	scanf("%d%d", &number1, &number2);
	if(number1>number2)
		printf("%d较大\n",number1);
	else
		printf("%d较大\n",number2);
	return 0;
}
