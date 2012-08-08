#include <stdio.h>

float celsius(int fahr);
/* Exercise 1-15:  Rewrite the temperature conversion program of section 1.2 to use a function for conversion */
main(){
	int i;
	for (i = 20; i <= 300; i += 20)
		printf("%3d %6.1f\n", i, celsius(i));
	return 0;
}

float celsius(int fahr){
	return (5.0/9.0) * (fahr - 32.0);
}