#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct kvp{
	char *key;
	int line;
};

/* Exercise 6-3:  Write a cross-referencer that prints a list of all words in a document and, for each word, a list of the line
	numbers on which it occurs.  Remove noise words like "the", "and", and so on. */

#define MAXLENGTH 100
#define MAXWORDS 10000
#define NOISES 9

main()
{
	char *NOISEWORDS[NOISES] = {"the", "be", "to", "of", "and", "a", "in", "that", "have"};
	int line = 1;
	char word[MAXLENGTH];
	struct kvp words[MAXWORDS];
	int i = 0;
	for (i = 0; i < MAXWORDS; i++){
		words[i].line = 0;
		words[i].key = 0;
	}
	i = 0;
	int j = 0;
	char c;
	while ((c = getchar()) != EOF){
		if (c == '\n' || c == ' ' || c == '\t'){
			char *newword = malloc(strlen(word) + 1);
			strcpy(newword, word);
			if (j){
				words[i].key = newword;
				words[i].line = line;
				memset(word, '\0', MAXLENGTH);			//sets the first MAXLENGTH items in word to '\0'
				j = 0;
				i++;
			}
		} else {
			word[j++] = c;
		}
		if (c == '\n')
			line++;
	}
	int k = i;
	printf("\n  Results  \n-----------\n");
	for (i = 0; i < k; i++){
		int goodline = -1;
		int j = 0;
		if (!words[i].line)
			break;		
		int noise;
		for (noise = 0; noise < NOISES; noise++){
			if (!strcmp(words[i].key, NOISEWORDS[noise]))
				goto next;		//It's a noise word.
		}
		while (j < i){
			if (!strcmp(words[i].key, words[j].key))
				goto next;		//We've already seen this key.
			j++;
		}	
		printf("%s:\t", words[i].key);
		while (j < k){
			if (!strcmp(words[i].key, words[j].key))
				if (words[j].line != goodline){
					goodline = words[j].line;
					printf(" %d", goodline);
				}
			j++;
		}
		printf("\n");
				next:		;
	}
	return 0;
}
