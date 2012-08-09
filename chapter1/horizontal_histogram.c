#include <stdio.h>

/* Exercise 1-13:  Write a program to print a histogram of the lengths of words in its input. */
main()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			putchar('-');
		else if (c == ' ' || c == '\t' || c == '\n')
			putchar('\n');
	}
}