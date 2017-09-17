#include <stdio.h>
#include <inttypes.h>

int main()
{

	printf( "    short int: %zd bits\n" , sizeof(short int) * 8 * 8 ) ;
	printf( "          int: %zd bits\n" , sizeof(int) * 8) ;
	printf( "     long int: %zd bits\n", sizeof(long int) * 8 ) ;
	printf( "long long int: %zd bits\n", sizeof(long long int) * 8 ) ;
	printf( "       size_t: %zd bits\n", sizeof(size_t) * 8) ;
	printf( "        void*: %zd bits\n\n", sizeof(void *) * 8) ;


	printf( "PRIu32 usage (see source): %"PRIu32"\n" , (uint32_t) 42 ) ;
	return 0;

}