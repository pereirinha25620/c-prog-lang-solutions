/*
 * Convert a string of hexadecimal digits (including optional 0x or 0X into its
 * equivalent integer value.
 * Allowed digits: 0 to 9, a to f and A to F.
 * Considering unsigned integer only.
 */
#include <stdio.h>

/* Function prototype */
unsigned long htoi(char s[]);


int main()
{
	printf("HEX: %x - INT: %lu\n", 0xF1, htoi("0xF1"));
	printf("HEX: %x - INT: %lu\n", 0XFF, htoi("0xFF"));
	printf("HEX: %x - INT: %lu\n", 0x1f, htoi("0x1F"));
	printf("HEX: %lx - INT: %lu\n", 0x1000000000000000, htoi("0x1000000000000000"));
}


unsigned long htoi(char s[])
{
	unsigned long num, i, d;

	for (i = 0, num = 0; (d = s[i]) != '\0'; i++)
		if (d >= '0' && d <= '9')
			num = (num << 4) + d - '0';
		else if (d >= 'a' && d <= 'f')
			num = (num << 4) + d - 'a' + 10;
		else if (d >= 'A' && d <= 'F')
			num = (num << 4) + d - 'A' + 10;

	return num;
}