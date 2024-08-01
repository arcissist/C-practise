#include <stdio.h>
#include <string.h>

int main( int argc, const char** argv )
{
	char address[100] = "";
	char findChar = 0;
	int i = 0, tab = 0;
	memset( address, 0, sizeof(address) );
	printf( "Please enter a character sting:" );
	fgets( address, 100, stdin );
	printf( "Please enter a letter:" );
	scanf( "%c", &findChar );
	for( i=0; i<strlen(address); i++ )
	{
		if( address[i] == findChar )
		{
			printf( "%d  ", i+1 );
			tab = 1;
		}
	}
	if( tab == 0 )
		printf( "Unfound\n" );
	else
		printf( "\n" );
	return 0;
}
