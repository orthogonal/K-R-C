#include <stdio.h>

/* Challenge vertical histogram from exercise 1-13 */
main()
{
	int c;
	int i;
	int wordlengths[999];	//Could be longer if necessary
	for (i = 0; i < 999; i++)
		wordlengths[i] = 0;
	i = 0;
	while ((c = getchar()) != EOF)
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			++wordlengths[i];
		else if (c == ' ' || c == '\t' || c == '\n')
			++i;
	}
	int max = 0;
	for (i = 0; i < 999; i++)
		if (wordlengths[i] > max) 
			max = wordlengths[i];
	
	while (max != 0)
	{
		for (i = 0; i < 999; i++)
			if (wordlengths[i] > 0)
				if (wordlengths[i] == max){
					--wordlengths[i];
					printf(".");
				}
				else
					printf(" ");
		printf("\n");
		--max;
	}
}