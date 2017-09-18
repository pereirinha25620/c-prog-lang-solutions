#include <stdio.h>

/* Rewriting the longestLine.c program. New loop construction used in the getlinelength() function. */


#define MAXLINE	1000 /* Maximum length for a single line */

/* Function prototypes */
int getlinelength(char line[], int maxline);
void copyline(char to[], char from[]);

/* Print the longest inputed line */
int main()
{

	int len; 				/* current line length */
	int max; 				/* maximum length seen so far */
	char line[MAXLINE];		/* current line input */
	char longest[MAXLINE]; 	/* longest line is saved here */


	max = 0; 

	while ((len = getlinelength(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copyline(longest, line);
		}

	if (max > 0)
		printf("The longest line:\n%s\n", longest);

	return 0;
}

/* Read a new line into source and return it's length */
int getlinelength(char source[], int max)
{
	int c, i = 0;

	/* Copy the characters into source array. */
	/* Original loop:
	for (i = 0; i < max-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		source[i] = c;
	*/

	/* Let the array grow to the limit of max - 1 */
	while (i < max - 1) {
		c = getchar();

		/* Break if has reached EOF */
		if (c == EOF) max = 0;
		/* Break if current char is new line */
		else if (c == '\n') max = 0;
		/* It's a valid char for copy. */
		else {
			source[i] = c;
		++i;
		}
	}

	/* If the copy has ended because end of line was reached. */
	if (c == '\n') {
		source[i] = c;
		++i;
	}

	/* Append null to signalize the end of the char array. */
	source[i] = '\0';

	return i;
}


/* Copy an array from source to destination. */
void copyline(char to[], char from[])
{
	int i;

	for (i = 0; (to[i] = from[i]) != '\0'; ++i);
}