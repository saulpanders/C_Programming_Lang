#include <stdio.h>

/*
	@saulpanders
	f2c_func.c: print farenheit - celcius conversion table using functions
	from "C Programming Language 1.15"
*/


void far2cel(int lower, int upper, int step){
    int fahr, celcius;
    
    fahr = lower;
	printf("Fahr\tCelcius\n");
	while (fahr <= upper) {
		celcius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celcius);
		fahr += step;
	}
}

int main ()
{
	int lower, upper, step;
	
	lower = 0; 		//lower limit of temp scale
	upper = 300;	//upper limit
	step = 20;		//step size

    far2cel(lower, upper, step);
	
    return 0;
}
