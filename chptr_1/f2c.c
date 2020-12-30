#include <stdio.h>

/*
	@saulpanders
	11/30/2019
	f2c.c: print farenheit - celcius conversion table
	from "C Programming Language 1.2"
*/

main ()
{
	int fahr, celcius;
	int lower, upper, step;
	
	lower = 0; 		//lower limit of temp scale
	upper = 300;	//upper limit
	step = 20;		//step size
	
	fahr = lower;
	printf("Fahr\tCelcius\n");
	while (fahr <= upper) {
		celcius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celcius);
		fahr += step;
	}
}