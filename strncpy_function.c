#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Write a version of the library function strncpy, which copies at most n characters of t to s.  */

void strn_cpy(char *t, char *s, int n);

main()
{
	char s[] = "Amelia";
	char t[] = "Fazackerley";
	strn_cpy(t, s, 5);
	printf("%s\n", s);
	return 0;
}

void strn_cpy(char *t, char *s, int n)
{
	while (*s++ = *t++, --n > 0)
		;
}