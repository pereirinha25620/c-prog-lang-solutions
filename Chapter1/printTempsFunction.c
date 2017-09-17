#include <stdio.h>

#define LOWER   0
#define HIGHER  300
#define STEP    20

/* Function prototypes */
float fahrToCelsius(int fahr);

int main()
{

    float fahr;
   
    /* Header for temperature table */
    printf(" F\tC\n");
    printf("----------\n");

    for (fahr = LOWER; fahr <= HIGHER; fahr = fahr + STEP) 
        printf("%3.0f %6.1f\n", fahr, fahrToCelsius(fahr));

}

float fahrToCelsius(int fahr)
{
    return 5.0/9.0*(fahr-32);
}