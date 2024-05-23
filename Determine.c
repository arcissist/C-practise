#include <stdio.h>
int main(int argc, char * argv[])
{
	int num = 0;
	scanf("%d", &num);
	if(num>5000)
		printf("%d大于5000\n",num);
	else if(num<5000)
		printf("%d小于5000\n",num);
	else
		printf("%d等于5000\n",num);
	return 0;
}
