#include <string.h>
#include <stdio.h>

int main( int argc, const char** argv ) 
{
	char s1[100], s2[100];
	printf( "Enter two strings, requiring that the first is longer than the length of the second string:\n" );
	fgets( s1, 100, stdin );
	fgets( s2, 100, stdin );
	strncpy( s1, s2, strlen(s2) );
	printf( "The first string after the assignment:%sThe first second after the assignment:%s", s1, s2 );
	return 0;
}
