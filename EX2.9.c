#include <stdio.h>
#include <limits.h>

main()
{
	printf("%d\n", bitcount(0b010101));
	return 0;
}

/* bitcount: count 1  bits in x */
int bitcount(unsigned x)
{
	int b;

	for (b = 0; x != 0; b++)
		x &= (x - 1); //delet the right most 1-bit in x
	    printf("%d\n",x);
	return b;
}
