#include <stdio.h>
#include <limits.h>		/* Header file containing the integer types sizes */
#include <float.h>		/* Header file containing the floating types sizes */

void printnewline(void);

int main()
{
	printnewline();
	
	/* Print the limits for char type */
	printf("Type: char\n");

	/* Unsigned char limits*/
	printf("- Unsigned char: [%d, %d]\n", 0, UCHAR_MAX);
	/* Signed char limits*/
	printf("- Signed char:\t [%d, %d]\n", SCHAR_MIN, SCHAR_MAX);

	printnewline();

	/* Print the limits for integer type */
	printf("Type: int\n");

	/* Unsigned integer limits*/
	printf("- Unsigned char: [%d, %u]\n", 0, UINT_MAX);
	/* Signed integer limits*/
	printf("- Signed char:\t [%d, %d]\n", INT_MIN, INT_MAX);

	printnewline();


}

void printnewline()
{
	putchar('\n');
}