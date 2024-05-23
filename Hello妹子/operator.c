#include <stdio.h>

int main(int argc, const char * argv[])
{
	int x = 10;
	int n = 19;
	int k = 7;
	int m = n%k;
	x = x - 1;
	printf("x-1=%d,m=%d,\n", x, m);
	return 0;
}
