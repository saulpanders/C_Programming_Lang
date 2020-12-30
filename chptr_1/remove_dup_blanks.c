#include <stdio.h>

/*
	@saulpanders
	12/06/20
	remove_dup_blanks.c : replaces multiple blanks with single blank
	from "C Programming Language - 1.9 "
*/
#define NOTBLANK "A"

int main() {

    int c, last_c;
    last_c = NOTBLANK;

	while ((c = getchar()) != EOF){
        if (c == ' '){
            if(c != ""){
                putchar(c);
            }
        }
        else{
            putchar(c);
        }
        
        last_c = c;
	}
    
    return 0;
}