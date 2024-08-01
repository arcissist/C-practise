#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char dest[20] = "Hello";
	char src[10] = "World";
	strncat( dest+1, src+1, 5 );
	printf( "%s\n", dest );
	return 0;
}
