#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char s[100];
	int c_num = 0, i = 0 ;
	printf( "Please enter a character string:" );
	fgets( s, 100, stdin );
	for( i=0; i<strlen(s)&&s[i]!='\0'; i++ )
	{
		if( s[i] == 10 )
			break;
		if( s[i] != ' ' )
			c_num++;
	}
	printf( "The string has all the %d characters\n", c_num );
	printf( "%s", s );
	//printf( "***%ld***%d***%c***\n", strlen(s)-1, s[strlen(s)-1], s[strlen(s)-1] ); 
	return 0;
}
