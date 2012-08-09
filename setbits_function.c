#include <stdio.h>
#include <ctype.h>

/* Exercise 2-6:  Write a function setbits(x, p, n, y) that returns x with the n bits that begin at position p set to the
	rightmost n bits of y, leaving the other bits unchanged. */

int setbits(int x, int p, int n, int y);

main()
{
	int x = 15;		//1111
	int p = 3;
	int n = 2;
	int y = 0;		//0000
	printf("Solution: %d\n", setbits(x, p, n, y));		//Should be 1001 or 9
	return 0;
}

int setbits(int x, int p, int n, int y)
{
	int mask;
	if (n == 0)
		mask = 0;
	else
	{
		mask = 1;
		mask <<= n;
		mask -= 1;
	}
	int nbity = mask & y;=
	mask <<= (p - n);
	x &= ~mask;
	x |= nbity;
	return x;
}