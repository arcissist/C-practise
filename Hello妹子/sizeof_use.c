#include <stdio.h>
int main(int argc, char * argv[]){
	int a,b,c,d;
	int e = (a=1, b=a++, c=a*b, d=c++ +b);
	int f = (a=1, b=++a, c=a*b, d=c+ ++b);
	printf("a=%d  b=%d  c=%d  d=%d  e=%d  f=%d\n", a, b, c, d, e, f);
	return 0;
}
