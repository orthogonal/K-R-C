#include <stdio.h>

/* Exercise 1-17:  Write a program to print all input lines that are longer than 10 characters (80 is annoying to test). */
main()
{
	int c;
	int string[999];
	int i = 0;
	while ((c = getchar()) != EOF)
	{
		if (c != '\n')
		{
			string[i] = c;
			i++;
		} else
		{
			if (i > 10){
				int j = 0;
				while (j < i)
				{
					putchar(string[j]);
					j++;
				}
				putchar('\n');
			}
			i = 0;
		}
	}
	return 0;
}