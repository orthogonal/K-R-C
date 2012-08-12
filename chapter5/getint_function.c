#include <stdio.h>
#include <ctype.h>

#define SIZE 15

/* Exercise 5-1:  As written, getint treats a + or - not followed by a digit as a valid representation of zero.
	Fix it to push such a character back on the input.  (I don't think this program makes sense - maybe I'm interpreting it wrong?)*/
	
int getint(int *pn);
int getch(void);
void ungetch(int c);

main()
{
	int n, array[SIZE];
	for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
		printf("%d: %d\n", n, array[n]);
	printf("\n");
	return 0;
}

int getint(int *pn)
{
	int c, sign;
	while (isspace(c = getch()))	/* skip white space */
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-')
	{
		ungetch(c);		//It's not a number
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
	{
		char d = c;
		c = getch();
		if (!isdigit(c)){
			ungetch(d);
			return 0;
		}
	}
	for (*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
}

#define BUFSIZE 100

char buf[BUFSIZE];      /* buffer for ungetch */
int bufp = 0;           /* next free position in buf */

int getch(void)         /* get a (possibly pushed-back) character */
{
        return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)     /* push character back on input */
{
        if (bufp >= BUFSIZE)
                printf("ungetch: too many characters\n");
        else
                buf[bufp++] = c;
}