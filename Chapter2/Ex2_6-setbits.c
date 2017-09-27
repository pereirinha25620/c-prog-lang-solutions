/*
 * Return x with the n bits that begin at position p set to the rightmost position 
 * n bits of y, leaving the other bits unchanged.
 */

#include <stdio.h>

/* Function prototypes */
unsigned setbits(unsigned x, int p, int n, unsigned y);

/* Test */
int main()
{
	printf("%x - %x\n", 0xff, setbits(0xff, 4, 3, 0x2));
	printf("%x - %x\n", 0xAA, setbits(0xAA, 5, 6, 0x1e));

	return 0;
}


unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	/* Clear the n bits of x at position p (assuming n = 3) leaving the others unchanged:
	 * ~0 << n => ..1111000 
	 * ~(~0 << n) => ..0000111
	 * (~(~0 << n) << (p-n+1)) => ..001110000
	 * ~(~(~0 << n) << (p-n+1)) => ..110001111
	 * finally: x & (~(~(~0 << n) << (p-n+1)))
	 * 
	 * Get the n rightmost bits of y and position them at position p:
	 * (y & ~(~0 << n)) << (p-n+1)
	 */

	return (x & (~(~(~0 << n) << (p-n+1)))) | ((y & ~(~0 << n)) << (p-n+1));
}