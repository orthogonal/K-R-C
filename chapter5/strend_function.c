#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*  Write the function strend(s, t), which returns 1 if the string t occurs at the end of the string s, and zero otherwise.  */

int strend(char *s, char *t);

main()
{
	char s[] = "New York";
	char t[] = "York";
	printf("%d\n", strend(s, t));
	return 0;
}

int strend(char *s, char *t)
{
	s += (strlen(s) - strlen(t));
	while (strlen(t))
		if (*s++ != *t++)
			return 0;
	return 1;
}