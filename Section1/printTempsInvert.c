#include <stdio.h>

/* This program is a study sample based on the printTemps. It inverts the temperature conversion. */

#define LOWER   0
#define HIGHER  100
#define STEP    10

int main() 
{
    float celsius;

    for (celsius = HIGHER; celsius >= LOWER; celsius = celsius - STEP)
        printf("ºC: %3.0f - ºF: %6.1f\n", celsius, 9.0/5.0*celsius+32.0);

    return 0;
}
