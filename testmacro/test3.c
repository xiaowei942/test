#include <stdlib.h>
#include <stdio.h>

#define sin_zero __pad

struct pj_sockaddr_in{
	int no;
	int  sin_zero;
};

#define __pad sin_zero
void main()
{
	struct pj_sockaddr_in sa;
	sa.sin_zero = 0;
	sa.__pad = 1;
}
