#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char str[] = "It's a computer";
	int j = 0;
	for( int i=0; str[i]!='\0'; i++ )
	{
		if( str[i] == 'c' )
			j = i;
		if( j != 0 )
			printf( "%c", str[j++] );
	}
	printf( "\n" );
	return 0;
}
