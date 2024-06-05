#include <stdio.h>
int main(int argc, const char * argv)
{
	int a[10] = { 0 };
	int sum = 0, i = 0;
	printf( "Please enter the ten integers:" );
	for( i=0; i<10; i++ )
	{
		scanf( "%d", &a[i] );
		if( a[i]%2==0 )
		{
			sum+=a[i];
		}
	}	
	printf( "The sum of all even number of these ten integers: %d\n", sum );
	return 0;
}
