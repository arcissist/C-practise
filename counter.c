#include <stdio.h>
int main(int argc, const char * argv[])
{
	char operation = 0;
	float num1 = 0, num2 = 0, outcome = 0;
	scanf("%f%c%f", &num1, &operation, &num2);
	switch(operation)
	{
		case '+': outcome = num1 + num2; break;
		case '-': outcome = num1 - num2; break;
		case '*': outcome = num1 * num2; break;
		case '/': outcome = num1 / num2; break;
		default: break;
			
	}
	printf("%f\n",outcome);
	return 0;
}
