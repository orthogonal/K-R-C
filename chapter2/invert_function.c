#include <stdio.h>
#include <ctype.h>

/*  Exercise 2-7:  Write a function invert(x, p, n) that returns x with the n bits that begin at position p inverted */

int invert(int x, int p, int n);

main()
{
	int x = 15;		//1111
	int p = 3;
	int n = 2;
	printf("The solution is: %d\n", invert(x, p, n));		//Should be 1001 or 9
	return 0;
}

int invert(int x, int p, int n)
{
	int mask;
	if (n == 0)
		mask = 0;
	else
		mask = ((1 << n) - 1) << (p - n);
	return (x ^ mask);
}