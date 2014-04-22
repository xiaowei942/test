#include <stdio.h>

void func1()
{
	printf("func1\n");
}

void func2()
{
	printf("func2\n");
}

#define func1 func2
void main()
{
	func1();
}
