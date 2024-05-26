#include <stdio.h>
int main(int arc, const char * argv[])
{
	int ps = 0, num = 0, pass = 123;
	printf( "Please enter the password:" );
	for ( ; ; )
	{
		scanf ( "%d", &ps );
		num++;
		if ( ps == pass )
		{
			printf ( "The correct password is verified.\n" );
			break;
		}
		else
		{
			if ( num >= 3 )
			{
				printf ( "The password entry error has been locked\n" );
				break;
			}
			else
			{
				printf ( "The password is wrong, please enter it again(With only %d input opportunities left).\n", 3-num );
			}
		}
	}
	return 0;
}
