#include <stdio.h>

#define NEW_LINE_CHAR   10
#define INPUT_LABEL     "Inputed: "

int main() 
{

    int c;

    c = getchar();
    while (c != EOF) {
        if (c != NEW_LINE_CHAR) {
            printf(INPUT_LABEL);
            putchar(c);
            putchar(NEW_LINE_CHAR);
        }
        c = getchar();
    }

    return 0;
}
