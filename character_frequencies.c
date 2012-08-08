#include <stdio.h>

/* Exercise 1-14:  Write a program to print a histogram of the frequencies of different characters in its input */
main()
{
	int c;
	int frequencies[52];
	int i;
	for (i = 0; i < 52; i++)
		frequencies[i] = 0;
	while ((c = getchar()) != EOF)
	{
		if (c >= 'a' && c <= 'z')
			++frequencies[c - 'a'];
		else if (c >= 'A' && c <= 'Z')
			++frequencies[c - 'A' + 26];
	}
	int max = 0;
	for (i = 0; i < 52; i++)
		if (frequencies[i] > max) 
			max = frequencies[i];
	
	while (max != 0)
	{
		for (i = 0; i < 52; i++)
			if (frequencies[i] > 0)
				if (frequencies[i] == max){
					--frequencies[i];
					printf(".");
				}
				else
					printf(" ");
		printf("\n");
		--max;
	}
}