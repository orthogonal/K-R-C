#include <stdio.h>
#include <ctype.h>

/* Write a pointer version of the function strcat(s, t) that copies the string t to the end of s */

void str_cat(char *s, char *t);

main()
{
	char s[99] = "Amelia ";
	char *t = "Fazackerley";
	str_cat(s, t);
	printf("%s\n", s);
	return 0;
}

void str_cat(char *s, char *t)
{
	while (*s++)
		;
	s--;
	while (*s++ = *t++)
		;
}