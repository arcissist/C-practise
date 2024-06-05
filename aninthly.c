#include <stdio.h>
int main(int argc, const char * argv[])
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int mul = 0, i = 0, out = 0;
	for( mul=1, i=0; i<5; i++ )
	{
		out += mul*a[i];
		mul *= 10;
	}	
	printf( "Output integer:%d\n", out );
	return 0;
}
