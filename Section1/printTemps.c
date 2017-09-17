#include <stdio.h>

#define LOWER   0
#define HIGHER  300
#define STEP    20

int main() {

    float fahr;
   
    /* Header for temperature table */
    printf(" F\tC\n");
    printf("----------\n");

    for (fahr = LOWER; fahr <= HIGHER; fahr = fahr + STEP) 
        /* First Iteration: 
         * Output without formatting.
         */
        // printf("%d\t%d\n", fahr, 5 * (fahr - 32) / 9);

        /* Second iteration:
         * Printing output formatted with floating point
         * values.
         */
        printf("%3.0f %6.1f\n", fahr, 5.0/9.0*(fahr-32));

}
