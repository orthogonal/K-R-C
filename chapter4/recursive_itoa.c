#include <stdio.h>
#include <ctype.h>

/* Exercise 4-12:  Adapt the ideas of printd to write a recursive version of itoa; that is, convert an integer into
	a string by calling a recursive routine. */
	
void itoa(int n, int s[], int digits);

main()
{
	int s[99];
	itoa(12345678, s, 8);
	
	int i;
	for (i = 0; i < 8; i++)
		printf("%d", s[i]);
	printf("\n");
	return 0;
}

void itoa(int n, int s[], int digits)
{
	if (n / 10 != 0)
		itoa (n / 10, s, digits - 1);
	s[digits - 1] = n % 10;
}