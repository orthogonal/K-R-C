#include <stdio.h>
#include <ctype.h>

/* Exercise 2-5:  Write the function any(s1, s2) which returns the first location in the string s1 where any
	character from the string s2 occurs, or -1 if s1 contains no characters from s2 */
	
int any(char s1[], char s2[]);

main()
{
	char s1[] = "Hello";
	char s2[] = "Andrew";
	printf("The first location is at index %d\n", any(s1, s2));
	return 0;
}

int any(char s1[], char s2[])
{
	int i = 0;
	int s1_length = 0;
	int s2_length = 0;
	
	while (s1[s1_length] != '\0')
		s1_length++;
	while (s2[s2_length] != '\0')
		s2_length++;
	while (i < s1_length)
	{
		int j = 0;
		while (j < s2_length)
		{
			if (s1[i] == s2[j])
				return i;
			j++;
		}
		i++;
	}
	return -1;
}