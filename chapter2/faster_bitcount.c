#include <stdio.h>
#include <ctype.h>

/* Exercise 2-9:  In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit in x.
	Use this observation to write a faster version of bitcount. */
	
int bitcount(unsigned x);
	
main()
{
	int n = 31;		//11111
	printf("There are %d bits in %d\n", bitcount(n), n);		//Should be 5
	return 0;
}	

int bitcount(unsigned x)
{
	int b = 0;
	while (x != 0)
	{
		x &= (x - 1);
		b++;
	}
	return b;
}
