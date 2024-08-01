#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char source[] = "Chinanet,https://baike.baidu.com/item/", target[20] = "narcissist";
	printf( "Source string:	%s\n", source );
	printf( "Target string:	%s\n", target );
	strncpy( target, source, 30);
	printf( "Execute statements:	strncpy( target, source, 30)\n" );
	puts( target );
	return 0;
}
