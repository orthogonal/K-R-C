#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Exercise 4-1:  Write the function strrindex(s, t) which returns the position of the rightmost occurrence of t in s,
	or -1 if there is none. */

int strrindex(char s[], char t);

main()
{
	char s[] = "Amelia Fazackerley";
	printf("e: %d\nx: %d\n", strrindex(s, 'e'), strrindex(s, 'x'));
	return 0;
}

int strrindex(char s[], char t)
{
	int i = 0;
	int x = -1;
	while (i < strlen(s))
		if (s[i++] == t)
			x = i;
	return x;
}