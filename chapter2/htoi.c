#include <stdio.h>
#include <ctype.h>

/* Exercise 2-3:  Write the function htoi(s), which converts a string of hexadecimal digits (including an option 0x or 0X) into
	its equivalent integer value.  The allowable digits are 0 through 9, a through f, and A through F. */
	
int htoi(char s[]);

main(){
	char hexes[] = "ff430F0x";
	printf("Answer is %ld\n", htoi(hexes));
	return 0;
}

int htoi(char s[]) 
{
	int length = 0;
	char indices[] = "0123456789ABCDEF";
	unsigned long result = 0L;
	int power = 1;
	while (s[length] != '\0')
		length++;
	int i = length - 1;
	while (i >= 0)
	{
		if (s[i] == '0' || s[i] == 'x' || s[i] == 'X'){
			i--;
			power *= 16;
			continue;
		}
		int j = 0;
		if (s[i] >= 'a' && s[i] <= 'z'){
			s[i] -= ('a' - 'A');
		}
		while (s[i] != indices[j])
			j++;
		result += (long)(j * power);
		power *= 16;
		i--;
	}
	return result;
}