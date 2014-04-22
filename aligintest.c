#include <stdio.h>

#pragma pack(4)
struct stru
{
              char aa;
	      char ad[14];
              double k;
	      int b;
}A;

void main()
{
	printf("sizeof(A) is %d\n", sizeof(A));
	printf("addr: aa is %d\n", &A.aa);
	printf("addr: ad is %d\n", A.ad);
	printf("addr: k is %d\n", &A.k);
	printf("addr: b is %d\n", &A.b);
}
