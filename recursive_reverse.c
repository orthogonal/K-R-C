#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*  Exercise 4-13:  Write a recursive version of the function reverse(s), which reverses the string s in place. */

void recursive_reverse(char s[], int i, int j);

main()
{
	char s[] = "Amelia Fazackerley";
	recursive_reverse(s, 0, strlen(s) - 1);
	printf("%s\n", s);
	return 0;
}

void recursive_reverse(char s[], int i, int j)
{
	int tmp = s[i];
	s[i] = s[j];
	s[j] = tmp;
	if (++i < --j)
		recursive_reverse(s, i, j);
}