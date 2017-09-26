/* 
 * Convert a string of numeric values into its int equivalent.
 * Considering only positive values.
 */
#include <stdio.h>

#define	TEST_1 "26121982"
#define	TEST_2 "20092015"

/* Function prototype */
int atoi(char s[]);

int main()
{

	printf("%d\n", atoi(TEST_1));
	printf("%d\n", atoi(TEST_2));

}

int atoi(char s[])
{
	int num, i;

	for (i = 0, num = 0; s[i] != '\0'; i++)
		num = num * 10 + s[i] - '0';

	return num;
}