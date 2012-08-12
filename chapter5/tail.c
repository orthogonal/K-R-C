#include <stdio.h>		/* required */
#include <string.h>		/* strcopy */
#include <stdlib.h>		/* malloc */

#define MAXLINE 1000
#define MAXLINES 1000

int get_line(char *lines[], int j);

/* Exercise 5-13:  Write the program tail, which prints the last n lines of its input.
	By default, n is 10, but it can be changed by an optional argument i.e. tail -5 prints the last 5 lines.
	The program should behave rationally no matter how unreasonable the input or the value of n.
	Write the program so it makes the best use of available storage. */
	
/* Input will continue until a blank line is received (i.e. the user just hits enter at the end).  EOF exits immediately.
	The program stores strings as pointers, not in a two-dimensional array, so space is minimized.
	If n is not a digit, then it is 10 by default.  0 and negative numbers are not valid values for n (then the program wouldn't do anything!)
	Combinations of digits and non-digits, i.e. 24xyz, will catch just the initial digit part, i.e. 24.  */

main(int argc, char *argv[])
{
	int c;
	int n = 0;
	
	while (--argc > 0 && (*(++argv))[0] == '-'){
		while (c = (++(*argv))[0]){
			if (isdigit(c)){
				n *= 10;
				n += (c - '0');
			} else {
				break;
			}
		}	
	}
	
	n = n ? n : 10;
	printf("%d\n", n);
	char *lines[MAXLINES];
	int j = 0;
	while (get_line(lines, j++))
		;
	for (j = 0; j < n && lines[j]; j++)
		printf("%s\n", lines[j]);
	return 0;
}


int get_line(char *lines[], int j)
{
	int c, i;

	char s[MAXLINE];

	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == EOF)
		printf("Hello World");
	s[i] = '\0';
	
	char *t = malloc(i + 1);
	strcpy(t, s);
	if (i)
		lines[j] = t;
	return i;
}