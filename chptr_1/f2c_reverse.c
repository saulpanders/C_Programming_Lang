#include <stdio.h>

/*
	@saulpanders
	11/30/2019
	f2c_reverse.c : prints fahr - celcius using for loop (reverse order)
	from "C Programming Language - 1.3"
*/

int main (){

	int fahr;
	
	for (fahr = 300; fahr >=0; fahr = fahr - 20){
	
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
	}
	
	return 0;

}