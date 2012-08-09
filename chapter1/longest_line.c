#include <stdio.h>
#define MAXLINE 4	/* maximum input line size */

int gtline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	max = 0;
	while ((len = gtline(line, MAXLINE)) > 0)
		if (len > max){
			max = len;
			copy(longest, line);
		}
	if (max > 0){
		printf("%s", longest);
		if (max > MAXLINE)
			printf("...");
		printf("\n%d\n", max);
	}
	return 0;
}

int gtline(char s[], int lim)
{
	int c, i;
	
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
		if (i < lim - 1)
			s[i] = c;
	if (c == '\n'){
		if (i < lim - 1)
			s[i] = c;
		++i;
	}
	if (i < lim - 1)
		s[i] = '\0';
	else
		s[lim - 1] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;
	
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}