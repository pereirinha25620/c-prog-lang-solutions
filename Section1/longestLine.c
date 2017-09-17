#include <stdio.h>

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
		printf("%s\n", longest);

	return 0;
}

/* Read a new line into source and return it's length */
int getlinelength(char source[], int max)
{
	int c, i;

	/* Copy the characters into source array. */
	for (i = 0; i < max-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		source[i] = c;

	if (c == '\n') {
		source[i] = c;
		++i;
	}
	source[i] = '\0';

	printf("Got a new line! Length: %d\n", i);

	return i;
}


/* Copy an array from source to destination. */
void copyline(char to[], char from[])
{
	int i;

	for (i = 0; (to[i] = from[i]) != '\0'; ++i);
}