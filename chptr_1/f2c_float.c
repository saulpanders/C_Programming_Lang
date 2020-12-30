#include <stdio.h>

/*
	@saulpanders
	11/30/2019
	f2c_float.c: print farenheit - celcius conversion table (float precision)
	from "C Programming Language 1.2"
*/

main ()
{
	float fahr, celcius;
	float lower, upper, step;
	
	lower = 0; 		//lower limit of temp scale
	upper = 300;	//upper limit
	step = 20;		//step size
	
	fahr = lower;
	printf("Fahr\tCelcius\n");
	while (fahr <= upper) {
		celcius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celcius);
		fahr += step;
	}
}