#include <stdio.h>

int main(int argc, const char * argv[]){
	int a=5, b = 3, c = 9;
	printf("%d\n", ++a+b+c);
	printf("%d\n", (a++)+b+c++);
	printf("%d\n", a+b+++(++c));
	printf("%d\n", (++a)+(++b)+(++c));
	return 0;
}
