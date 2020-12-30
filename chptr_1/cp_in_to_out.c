#include <stdio.h>

/*
	@saulpanders
	11/30/2019
	cp_in_to_out.c : copies text one char at a time from input to output 
	from "C Programming Language - 1.5"
*/

int main (){
	int c;
	
	while ((c = getchar()) != EOF){
		putchar(c);
	}

	return 0;
}