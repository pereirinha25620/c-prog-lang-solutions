#include <stdio.h>

#define	IN 		0
#define OUT		1

int main()
{

	int c, state;

	/* 
	 * Set the state variable ready to accept the printing of
	 * one space.
	 */
	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			if (state == IN) state = OUT;
			putchar(c);
		}
		else {
			if (state == OUT) {
				putchar(c);
				state = IN;
			}
		}
	}		

}