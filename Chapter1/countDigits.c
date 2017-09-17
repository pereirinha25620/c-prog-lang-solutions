#include <stdio.h>

#define ARRAY_LEN	10

/* Count the number of occurrences of each digit, blanks and other chars. */
int main() {

	unsigned long chars, blanks;
	unsigned long digits[ARRAY_LEN];
	int c, idx_i, idx_j;

	/* Set all counters to zero */
	chars = blanks = 0;

	for (idx_i = 0; idx_i < ARRAY_LEN; ++idx_i)
		digits[idx_i] = 0;


	while ((c = getchar()) != EOF) {
		/* Check if current char is a blank */
		if (c == ' ' || c == '\t' || c == '\n') ++blanks;
		/* Check if current char is a digit */
		else if ( c >= '0' && c <= '9') ++digits[c - '0'];
		/* Else is a general char */
		else ++chars;
	}

	/* Print digits histogram */
	printf("Digits: \n");
	for (idx_i = 0; idx_i < ARRAY_LEN; ++idx_i) {
		printf("- %d: ", idx_i);

		/* Print each line for histogram entry */
		for (idx_j = 0; idx_j <= digits[idx_i]; ++idx_j) {
			if (idx_j == 0) printf("| ");
			else putchar('-');
		}

		/* Print the number of occurences */
		printf(" %lu\n", digits[idx_i]);
	} 
	

	printf("Chars: %lu\n", chars);
	printf("Blanks: %lu\n", blanks);

}