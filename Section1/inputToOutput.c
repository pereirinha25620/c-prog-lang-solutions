#include <stdio.h>

/**
 * Copy the value of the input to the output.
 */


/* SECOND VERSION */
int main()
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);

	printf("EOF = %d\nTerminating program...\n", c);
}



/* FIRST VERSION 
int main()
{

	int c;

	c = getchar();

	while ( c != EOF) {
		putchar(c);
		c = getchar();

		if (c == EOF) printf("EOF = %d \n", c);

	}
}
*/