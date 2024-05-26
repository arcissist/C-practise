#include <stdio.h>
int main(int ragc, const char * argv[])
{
	int i = 0;
	for ( i=1; i<50; i++)
	{
		if ( i%3!=0 )
			continue;
		printf("%d ", i);
	}
	return 0;
}
