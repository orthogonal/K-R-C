#include <stdio.h>

/* Exercise 1-19:  Write a function reverse(s) that reverses the character string s.
	Use it to write a program that reverses its input one line at a time. */
		void reverse(int s[]);
main()
{
	int c;
	int s[999];
	int i = 0;
	while ((c = getchar()) != EOF)
	{
		if (c != '\n')
			s[i++] = c;
		else
		{
			s[i] = '\0';
			reverse(s);
			int j = 0;
			while (j < i)
				putchar(s[j++]);
			putchar('\n');
			i = 0;
		}
	}
}

void reverse(int s[])
{
	int length = 0;
	while (s[length] != '\0')
		length++;
	int begin = 0;
	int end = length - 1;
	int tmp;
	while (begin < end)
	{
		tmp = s[begin];
		s[begin] = s[end];
		s[end] = tmp;
		end--;
		begin++;
	}
}