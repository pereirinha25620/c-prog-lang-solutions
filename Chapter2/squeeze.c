/*
 * Remove the character c from the a given string (char array)
 */

#include <stdio.h>

#define STRING_1 	"Pedro Ribeiro Pereirinha"
#define CHAR_1		'e'
#define STRING_2 	"Hello world."
#define CHAR_2		'l'

/* Function prototype */
void squeeze(char s[], char c);

/* Test */
int main()
{	
	char s1[] = STRING_1;
	char s2[] = STRING_2;

	printf("%s\n", s1);
	squeeze(s1, CHAR_1);
	printf("%s\n", s1);

	printf("%s\n", s2);
	squeeze(s2, CHAR_2);
	printf("%s\n", s2);

}

void squeeze(char s[], char c)
{
	int i, j;

	for (i = j = 0; s[i] != 0; i++)
		if (s[i] != c)
			s[j++] = s[i];

	s[j] = '\0';
}
