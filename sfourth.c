#include <string.h>
#include <stdio.h>

int main( int argc, const char** argv ) 
{
	char s1[100], s2[100];
	int slen = 0;
	printf( "Please enter two strings:\n" );
	fgets( s1, 100, stdin );
	fgets( s2, 100, stdin );
	slen = strlen( s2 );
	if( s2[slen-1] = '\n' )
	{
		s2[slen-1] = 0;
	}
	strcat( s2, s1 );
	printf( "The first string after the assignment:%sThe second string after the assignment:%s", s1, s2 );
	return 0;
}
