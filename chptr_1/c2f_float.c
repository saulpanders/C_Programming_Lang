#include <stdio.h>

/*
	@saulpanders
	11/30/2019
	c2f_float.c: print celcius - fahrenheit conversion table (float precision)
	from "C Programming Language -  1.2"
*/

main ()
{
	float fahr, celcius;
	float lower, upper, step;
	
	lower = -100; 		//lower limit of temp scale
	upper = 200;	//upper limit
	step = 20;		//step size
	
	celcius = lower;
	printf("Celcius\tFahr\n");
	while (celcius <= upper) {
		fahr  = (celcius * (9.0/5.0)) + 32;
		printf("%3.0f\t%6.1f\n", celcius, fahr);
		celcius += step;
	}
}