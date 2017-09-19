#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/resource.h>
#include <limits.h>

#define ARRAY_SIZE 	10
#define MAX 		1000

/* Function prototypes */
int * generateRandomIntArray(int max);
void printArray(int * array, int size);
void bubbleSort(int * array, int size);
double get_process_time(void);


/* Function that generates an array of random integers between 0 and SIZE with length equal to SIZE */
int * generateRandomIntArray(int max)
{
	static int out[ARRAY_SIZE];

	/* Set the seed for random int generator */
	srand(time(NULL));

	/* Populate the array */
	for (int i = 0; i < ARRAY_SIZE; i++)
		out[i] = (rand() % max) + 1;

	return out;
}



int main()
{

	int *arr = generateRandomIntArray(MAX);
	
	/* Print original array */
	//printArray(arr, ARRAY_SIZE);

	double t_begin, t_end;

	t_begin = get_process_time();
	// Do some operation...
	bubbleSort(arr, ARRAY_SIZE);

	t_end = get_process_time();

	printf( "Elapsed time: %.6f seconds\n", t_end - t_begin );



	return 0;
}


/* Bubble Sort Array */
void bubbleSort(int * array, int size)
{
	int temp;

	for (int i = 0; i < size - 1; i++)
		for (int j = size - 1; j > i; j--)
			if (array[j] < array[j-1]) {
				temp = array[j];
				array[j] = array[j-1];
				array[j-1] = temp;
			}

}




/* Function that prints a generic int array */
void printArray(int * array, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d ", *(array + i));
	}
	printf("\n");
}

double get_process_time() {
    struct rusage usage;
    if( 0 == getrusage(RUSAGE_SELF, &usage) ) {
        return (double)(usage.ru_utime.tv_sec + usage.ru_stime.tv_sec) +
               (double)(usage.ru_utime.tv_usec + usage.ru_stime.tv_usec) / 1.0e6;
    }
    return 0;
}
