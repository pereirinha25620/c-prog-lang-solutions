/*
 * Return x rotated to the right by n bit positions.
 */

#include <stdio.h>
#include <limits.h>

/* Function prototypes */
unsigned rotate(unsigned x, int n);

/* Test */
int main()
{
	printf("%x - %x\n", 0xf, rotate(0xf, 4)); 		/* Expected 0xf000.. */
	printf("%x - %x\n", 0x7, rotate(0x7, 3));		/* Expected 0xe000.. */
	printf("%x - %x\n", 0xf5, rotate(0xf5, 3));		/* Expected 0xA000..1e */

	return 0;
}

unsigned rotate(unsigned x, int n)
{	
	/*
	 * Get the rightmost n bits of x and place them at the leftmost position.
	 * z_l = (~(~0 << n) & x) << (CHAR_BITS * sizeof(x) - n)
	 * 
	 * Shift x n bits to the right and clear (set to 0) the n leftmost bits:
	 * z_r = (x >> n) & ((~(~0 << n)) << ~((CHAR_BIT * sizeof(x) - n + 1)))
	 *
     * Join the the z_l and z_r
     * z_l | z_r
	 */
	return ((~(~0 << n) & x) << (CHAR_BIT * sizeof(x) - n)) | ((x >> n) & ((~(~0 << n)) << ~((CHAR_BIT * sizeof(x) - n + 1))));
}