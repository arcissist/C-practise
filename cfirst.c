#include <stdio.h>
int main(int argc, const char * argv[])
{
	int m = 0, n = 0, power = 0;
	printf("This procedure can compute the n power of m. Please enter m and n:");
	scanf ( "%d%d", &m, &n );
	printf("%d^%d=", m, n);
	for( power=m; n > 1 ; n-- )
	{
		power *= m;
	}
	printf("%d\n", power );
	return 0;
}
