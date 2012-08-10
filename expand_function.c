#include <stdio.h>
#include <ctype.h>

/* Exercise 3-3:  Write a function expand(s1, s2) that expands shorthand notations like a-z in the string s1 into the
	equivalent complete list abc...xyz in s2.  Allow for letters of either case and digits, and be prepared to handle
	cases like a-b-c and a-z0-9 and -a-z.  Arrange that a leading or trailing - is taken literally. */
	
void expand(char s1[], char s2[]);

main()
{
	char s1[] = "-a-d-z1-9";
	char s2[100];
	expand(s1, s2);
	printf("Result: %s\n", s2);
	return 0;
}

void expand(char s1[], char s2[])
{
	int i = 0;
	int j = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == '-')
		{
			if (i == 0 || s1[i + 1] == '\0'){
				i++;
				continue;
			}
			char start = s1[i - 1];
			char finish = s1[i + 1];
			if (s2[j - 1] == start) 
				j--;
			while (start != finish)
			{
				s2[j++] = start++;
			}
			s2[j++] = start;
		}
		i++;
	}
}