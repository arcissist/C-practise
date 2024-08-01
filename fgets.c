#include <stdio.h>

#define LEN 100
int main(int argc, char **argv)
{
	char s[LEN];
	fgets( s, LEN, stdin );
	printf( "%s\n", s );
	return 0;
}
