/*
 * Remove the character c from the a given string (char array)
 */

#include <stdio.h>

#define STRING_1 	"Pedro Ribeiro Pereirinha"
#define STRING_2 	"aeiou"

/* Function prototype */
void squeeze(char s1[], char s2[]);

/* Test */
int main()
{	
	char s1[] = STRING_1;
	char s2[] = STRING_2;

	/* Initial string */
	printf("%s\n", s1);

	squeeze(s1, s2);
	
	/* Final string */
	printf("%s\n", s1);		
	
}

void squeeze(char s1[], char s2[])
{
	int k, i, j;

	for (k = 0; s2[k] != 0; k++) {
		for (i = j = 0; s1[i] != 0; i++)
			if (s1[i] != s2[k])
				s1[j++] = s1[i];
		s1[j] = '\0';
	}
}
