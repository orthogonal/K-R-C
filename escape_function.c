#include <stdio.h>
#include <ctype.h>

/* Exercise 3-2:  Write a function escape(s, t) that converts characters like newline and tab into visible escape sequences
	like \n and \t as it copies the string t to s.  Use a switch. */
	
void escape(char s[], char t[]);

main()
{
	char t[] = "\tTab\nNewline";
	char s[20];
	escape(s, t);
	printf("Result: %s\n", s);
	return 0;
}

void escape(char s[], char t[])
{
	int i = 0;
	int j = 0;
	while (t[i] != '\0')
	{
		switch(t[i]){
		case '\t':
			s[j++] = '\\';
			s[j++] = 't';
			break;
		case '\n':
			s[j++] = '\\';
			s[j++] = 'n';
			break;
		default:
			s[j++] = t[i];
			break;
		}
		i++;
	}
	s[j] = '\0';
}