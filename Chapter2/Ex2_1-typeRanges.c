#include <stdio.h>
#include <limits.h>		/* Header file containing the integer types sizes */
#include <float.h>		/* Header file containing the floating types sizes */

void prinfIntegerSizesFromHeader(void);
void printnewline(void);



int main()
{
	printnewline();
	
	/* INTEGER LIMITS FROM GLIBC HEADER FILE */
	prinfIntegerSizesFromHeader();

	//TODO:
	/* FLOAT LIMITS */

	/* Computed version of the limits determination */



}


/* Print the limits for the integer types from limits.h */
void prinfIntegerSizesFromHeader(void)
{
	/****** Print the limits for CHAR type ******/
	printf("Type: CHAR\n");

	/* Unsigned char limits*/
	printf("- Unsigned char: [%d, %d]\n", 0, UCHAR_MAX);
	/* Signed char limits*/
	printf("- Signed char:\t [%d, %d]\n", SCHAR_MIN, SCHAR_MAX);

	printnewline();



	/****** Print the limits for SHORT type ******/
	printf("Type: SHORT\n");

	/* Unsigned integer limits*/
	printf("- Unsigned char: [%d, %u]\n", 0, USHRT_MAX);
	/* Signed integer limits*/
	printf("- Signed char:\t [%d, %d]\n", SHRT_MIN, SHRT_MAX);

	printnewline();



	/****** Print the limits for INT type ******/
	printf("Type: INT\n");

	/* Unsigned integer limits*/
	printf("- Unsigned char: [%d, %u]\n", 0, UINT_MAX);
	/* Signed integer limits*/
	printf("- Signed char:\t [%d, %d]\n", INT_MIN, INT_MAX);

	printnewline();



	/****** Print the limits for LONG type ******/
	printf("Type: LONG\n");

	/* Unsigned integer limits*/
	printf("- Unsigned char: [%d, %lu]\n", 0, ULONG_MAX);
	/* Signed integer limits*/
	printf("- Signed char:\t [%ld, %ld]\n", LONG_MIN, LONG_MAX);

	printnewline();
}


/* Helper function to print a new line in std output */
void printnewline()
{
	putchar('\n');
}