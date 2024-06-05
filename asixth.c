#include <stdio.h>
int main(int argc, const char * argv[])
{
	int num[10];
	int comdiv = 0, commul = 0;
	int i = 0;
	printf( "Please enter the ten integers:" );
	for( i=0; i<10; i++ )
	{
		scanf( "%d", &num[i] );
		if( i==0 )
		{
			comdiv = num[i];
			commul = num[i];
		}
		else
		{
			if( comdiv > num[i] )
			{
				comdiv = num[i];
			}
			if( commul < num[i] )
			{
				commul = num[i];
			}
		}
	}
	printf( "%d,%d\n", comdiv, commul );
	for( ; comdiv>1; comdiv-- )
	{
		for( i=0; i<10; i++)
		{
			if( num[i]%comdiv != 0 )
				break;
		}
		if( i==10 )
			break;
	}
	for( ; ; commul++ )
	{
		for( i=0; i<10; i++ )
		{
			if( commul%num[i] !=0 )
				break;
		}
		if( i==10 )
			break;
	}
	printf( "Greatest common divisor:%d,Least common multiple:%d\n", comdiv, commul );
	return 0;
}
