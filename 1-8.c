#include <stdio.h>

/* Exercise 1-8:  Write a program to count blanks, tabs, and newlines */
main()
{
	int c;
	int total;
	while ((c = getchar()) != EOF)
	{
		if ((c == ' ') || (c == '\t') || (c == '\n'))
			total++;
	}
	printf("%d\n", total);
}