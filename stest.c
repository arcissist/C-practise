#include <stdio.h>
#include <string.h>
int main( int argc, const char * argv[])
{
	char buffer[] = "Helloworld\n";
	printf( "Buffer before memset:%s\n", buffer );
	memset( buffer, '*' , strlen(buffer) );
	printf( "Buffer after memset:%s\n", buffer );
	printf( "%s\n", buffer );
	return 0;
}
