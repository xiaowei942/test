#include <stdio.h>

int main()
{
	int minimum_length;
	    
	for (minimum_length = 1; minimum_length < 6; minimum_length++) {
	    printf("Minimum length %d:\n", minimum_length);
	    printf("%*c\n%*s\n\n", minimum_length, 'A', minimum_length, "ABC");
	}
	return 0;
}
