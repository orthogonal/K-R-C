#include <stdio.h>
#include <limits.h>
#include <float.h>

/* Exercise 2-1:  Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, 
	by printing appropriate values from standard headers and by direct computation.  */
main()
{
	printf("From standard headers:\n");
	printf("Unsigned char:  %d - %d\n", 0, UCHAR_MAX);
	printf("Signed char:  %d - %d\n", CHAR_MIN, CHAR_MAX);
	printf("Unsigned short: %d - %d\n", 0, USHRT_MAX);
	printf("Signed short: %d - %d\n", SHRT_MIN, SHRT_MAX);
	printf("Unsigned int: %d - %u\n", 0, UINT_MAX);
	printf("Signed int: %d - %d\n", INT_MIN, INT_MAX);
	printf("Unsigned long: %d - %lu\n", 0, ULONG_MAX);
	printf("Signed long: %ld - %ld\n", LONG_MIN, LONG_MAX);
	
	printf("From direct computation:\n");
	int i = 1;
	int j = 1;
	while (i > 0){
		j = i;
		i *= 2;
	}
	printf("Signed int: %d - %d\n", (j * -2), (j + (j - 1)));
	//The others are similar but tedious and not interesting to discover.
	return 0;
}