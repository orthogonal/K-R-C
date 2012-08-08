#include <stdio.h>

#define IN	1		/* inside a word */
#define OUT	0		/* outside a word */

/* Exercise 1-12:  Write a program that prints its input one word per line. */
main()
{
	int c;
	int state = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t'){
			if (state == IN){
				printf("\n");
				state = OUT;
			}
		} else {
			state = IN;
			putchar(c);
		}
	}
}