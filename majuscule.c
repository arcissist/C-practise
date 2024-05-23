#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
	char psw1[20];
	char psw2[20];

	scanf("%s",psw1);
	scanf("%s",psw2);
	if ( !strcmp(psw1,psw2) )
	{
		printf("The two inputs are consistent\n");
	}
	else
	{
		printf("The two inputs are inconsistent\n");
	}
	return 0;
}
