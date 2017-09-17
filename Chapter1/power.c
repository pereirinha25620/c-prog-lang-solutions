#include <stdio.h>

/** 
 * Study program for function. Build a function that returns the result
 * of the base to the power of n.
 */

/* Function prototypes */
long power(long m, int n);

/**
 * In function prototype it's optional to explicitize the name of the
 * parameters. The function prototype could be defined as:
 * int power(int, int);
 */

int main()
{
	int i;

	for (i = 0; i <= 5; ++i) 
		printf("2 to the power %d is equal to %ld.\n", i, power(2, i));

}

long power(long base, int n)
{
	long result;

	for (result = 1; n > 0; --n)
		result = result * base;

	return result;
}