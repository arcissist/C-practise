#include <stdio.h>
int main(int argc, const char * argv[])
{
	char ch = 0;
	scanf("%c",&ch);
	if( ch>='0' && ch<='9' )
		printf("This is a number\n");
	if( ch>='a' && ch<='z' )
		printf("This is a small letter\n");
	if( ch>='A' && ch<='Z' )
		printf("This is a majuscule\n");
	return 0;
}
