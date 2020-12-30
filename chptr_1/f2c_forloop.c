#include <stdio.h>

/*
	@saulpanders
	11/30/2019
	f2c_forloop.c : prints fahr - celcius using for loop
	from "C Programming Language - 1.3"
*/

int main (){

	int fahr;
	
	for (fahr = 0; fahr <=300; fahr = fahr + 20){
	
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
	}
	
	return 0;

}