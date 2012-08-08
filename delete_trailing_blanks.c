#include <stdio.h>

/* Exercise 1-18:  Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines */
main()
{
	int c;
	int input[99999];
	int output[99999];
	int counter = 0;
	int start = 0;
	int inputlength = 0;
	while ((c = getchar()) != EOF)
		input[inputlength++] = c;
	int i = 0;
	while (i < inputlength)
	{
		c = input[i];
		if (c != '\n')
			output[counter++] = c;
		else{
				while (output[counter - 1] == ' ' || output[counter - 1] == '\t')
					counter--;
				if (start != counter)
					output[counter++] = '\n';
				start = counter;
		}
		i++;
	}
	i = 0;
	while (i < counter)
		putchar(output[i++]);
	return 0;
}