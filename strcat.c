#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char dest[20] = "GoldenGlobal";
	char *src = "View";
	printf( "dest:%s\n", dest );
	printf( "src :%s\n", src );
	printf( "strcat( dest, src ):%s\n", strcat( dest, src ) );
	return 0;
}
