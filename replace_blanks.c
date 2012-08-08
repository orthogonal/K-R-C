#include <stdio.h>

/* Exercise 1-9:  Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */
main()
{
	int c, firstspace;
	firstspace = 0;
	while ((c = getchar()) != EOF)
	{
		if (c ==c ' '){
			if (firstspace == 0)
			{
				putchar(c);
				firstspace = 1;
			}
		}
		else
		{
			putchar(c);
			firstspace = 0;
		}
	}
}