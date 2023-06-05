#include <stdio.h>
unsigned setbits(unsigned x, int p, int n, unsigned y);

main()
{
	printf("%u\n", setbits(0b11001100, 5, 3, 0b10101010));
	
	return 0;
}

/* setbits: returns x with the n bits starting at position p set to
 * the rightmost n bits of y */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	printf("%u\n", y & ~(~0 << n));
	printf("%u\n", ((y & ~(~0 << n)) << p + 1 - n));
	printf("%u\n", (x & ~(~(~0 << n) << p + 1 - n)));
	return (x & ~(~(~0 << n) << p + 1 - n)) | ((y & ~(~0 << n)) <<
		p + 1 - n);
}
