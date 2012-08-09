#include <stdio.h>

/* Exercise 2-2:  Write a loop equivalent for this for loop without using && or ||:
	for (i = 0; i < lim-1 && (c = getchar()) != '\n' && c != EOF; ++i) */
	
main(){
	int i = 0;
	while (i < lim-1)
	{
		c = getchar()
		if (c == '\n')
			i = lim-1;
		else if (c == EOF)
			i = lim-1;
		else
			s[i] = c;
		++i;
	}
	return 0;
}
//NOTE:  THIS DOES NOT ACTUALLY RUN.  It is only an example of an implementation.