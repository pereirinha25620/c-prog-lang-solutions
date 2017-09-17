#include <stdio.h>

int main()
{

	int c;
	long lines, blanks, tabs;

	lines = blanks = tabs = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') ++lines;
		else if (c == '\t') ++tabs;
		else if (c == ' ') ++blanks;
	}

	printf("Lines: %ld\n", lines);
	printf("Tabs: %ld\n", tabs);
	printf("Blanks: %ld\n", blanks);

}