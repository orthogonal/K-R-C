#include <stdio.h>
#include <ctype.h>

/*  Exercise 3-5:  Write the function itob(n, s, b) that converts the integer n into a base b character representation in the string s. */

void itob(int n, char s[], int b);
void reverse(char s[]);

main()
{
	char s[999];
	itob(200, s, 20);
	printf("S is %s\n", s);
	return 0;
}
void itob(int n, char s[], int b)
{
	char stuff[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if (n < 0)
		n = -n;
	int i = 0;
	do {
		s[i++] = stuff[n % b];
	} while ((n /= b) > 0);
	s[i] = '\0';
	reverse(s);
}
void reverse(char s[])
{
	int i = 0;
	int j = 0;
	while (s[j++] != '\0')
		;
	j -= 2;
	while (i < j)
	{
		int tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}