#include <stdio.h>

void second()
{
	char a = 0;
	int b = 0;
	float c = 0;
	double	d = 0;
	printf("char:%ld\nint:%ld\nfloat:%ld\ndouble:%ld\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double));
}

int main(int argc, const char * argv[])
{
	second();
	return 0;
}
