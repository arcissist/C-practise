#include <stdio.h>
int main(int argc, const char * argv[])
{
	int chicken = 0, rabbit = 0;
	for ( chicken = 0; chicken <= 88; chicken++ )
	{
		rabbit = 88 - chicken;
		if ( chicken*2+rabbit*4 == 244 )
		{
			printf ( "Chicken:%d, Rabbit:%d\n", chicken, rabbit );
		}
	}
	return 0;
}
