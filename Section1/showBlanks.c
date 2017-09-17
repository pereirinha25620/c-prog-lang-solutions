#include <stdio.h>

int main()
{

	int curChar;

	while((curChar = getchar()) != EOF) {

		if (curChar == '\t') {
			putchar('\\');
			putchar('t');
		}
		else if (curChar == '\b') {
			putchar('\\');
			putchar('b');
		}
		else putchar(curChar);

	}

}