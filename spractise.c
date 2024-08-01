#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char s1[99], s2[99];
	printf( "Please enter the string S1:" );
	gets(s1);
	printf( "Please enter the string S2:" );
	gets(s2);
	printf( "Connect the string S1 behind the string S2:" );
	strcat( s2, s1 );
	puts( s2 );
	return 0;
}
