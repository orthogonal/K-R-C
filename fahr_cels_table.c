#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300 */
main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */
	
	printf("\n\nFahrenheit to Celsius table\n\n");
	fahr = lower;
	while (fahr <= upper){
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	
	printf("\n\nCelius to Fahrenheit table\n\n");
	celsius = lower;
	while (celsius <= upper){
		fahr = ((9.0/5.0) * celsius) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;	
	}
}