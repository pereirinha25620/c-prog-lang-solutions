/* Get n bits from position p */

#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main()
{
	printf("%x - %x\n", 0x6b, getbits(0x6b, 4, 3));
}

unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p-n+1)) & (~(~0 << n));
}