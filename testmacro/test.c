#include <stdio.h>

#define xyz "xyz"
#define ijk "ijk"
#define abc "abc"

void main()
{
#define A abc
	printf("A: %s\n", A);
#define A ijk
	printf("A: %s\n", A);
#define A xyz
	printf("A: %s\n", A);
//#define xyz A
	printf("A: %s\n", xyz);
}
