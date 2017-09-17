#include <stdio.h>

#define	IN_WORD 	1
#define OUT_WORD	0

/* Count the words in a text.*/
int main ()
{

	unsigned long lines, chars, words;
	int c, state;

	/* Set all the counters to zero */
	lines = chars = words = 0;

	/* Set initial pointer state to be out of word */
	state = OUT_WORD;

	while ((c = getchar()) != EOF) {
		/* Count every character in text */
		++chars;

		/* If it's a new line character count a line */
		if (c == '\n') ++lines;

		/* If it's a blank, tab or new line, break out of word */
		if (c == ' ' || c == '\t' || c == '\n') state = OUT_WORD;
		/* Else, set state to in word and count a word on first word's character */
		else if (state == OUT_WORD){
			state = IN_WORD;
			++words;
		}
	}

	printf("Chars: %lu, Words: %lu, Lines: %lu\n", chars, words, lines);
}