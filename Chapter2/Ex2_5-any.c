/*
 * Return the first location (index) in a string s1 where any character from the string s2
 * occurs, or -1 if s1 contains no characters from s2.
 */

#include <stdio.h>

#define STRING_1 	"Pedro Ribeiro Pereirinha"
#define STRING_2 	"aeiou"
#define STRING_3 	"Pedro Ribeiro Pereirinha"
#define STRING_4 	"zulm"

/* Function prototype */
int any(char s1[], char s2[]);

/* Test */
int main()
{	
	int i;
	char s1[] = STRING_1;
	char s2[] = STRING_2;

	/* Print strings */
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", any(s1, s2));

	char s3[] = STRING_3;
	char s4[] = STRING_4;
	/* Print strings */
	printf("%s\n", s3);
	printf("%s\n", s4);
	printf("%d\n", any(s3, s4));
}

int any(char s1[], char s2[])
{
	int i, j;
	
	for (j = 0; s2[j] != '\0'; j++)
		for (i = 0; s1[i] != '\0'; i++)
			if (s1[i] == s2[j])
				return i;
	
	return -1;
}
