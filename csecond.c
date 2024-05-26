//韩信点兵，三人一组余两人，一人一组余三人，七人一组余四人，求这队士兵最少多少人
#include <stdio.h>
int main(int argc, const char * argv[])
{
	int pnum = 0;
	for( pnum = 1; ; pnum++ )
	{
		if( pnum%3==2 && pnum%5==3 && pnum%7==4 )
		{
			printf("The minimum number of soldiers was:%d\n", pnum);
			break;
		}
	}
	return 0;
}
