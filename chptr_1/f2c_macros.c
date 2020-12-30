#include <stdio.h>

/*
	@saulpanders
	11/30/2019
	f2c_macros.c : prints fahr - celcius using for loop (with macros/symbolic constants)
	from "C Programming Language - 1.4"
*/

#define LOWER 0 	//lower table limit
#define UPPER 300	//upper limit
#define STEP 20		//step size

int main (){

	int fahr;
	
	for (fahr = LOWER; fahr <= UPPER; fahr+= STEP){
	
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
	}
	
	return 0;

}