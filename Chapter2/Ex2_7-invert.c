/*
 * Return x with the n bits that begin at position p inverted, leaving the 
 * other bits unchanged.
 */

#include <stdio.h>

/* Function prototypes */
unsigned invert(unsigned x, int p, int n);

/* Test */
int main()
{
	printf("%x - %x\n", 0xff, invert(0xff, 7, 4)); 		/* Expected 0x0f*/
	printf("%x - %x\n", 0xff, invert(0xff, 5, 4));		/* Expected 0xc3*/
	printf("%x - %x\n", 0xc3, invert(0xc3, 5, 4));		/* Expected 0xff*/

	return 0;
}


unsigned invert(unsigned x, int p, int n)
{
	return (~(~0 << n) << (p-n+1)) ^ x;
}