#include <stdio.h>
/*
	@saulpanders
	single_word_print.c : prints program input one word at a time  
	from "C Programming Language - 1.12"
*/

#define IN  1 /* inside a word */
#define OUT 0 /* outside a word */

int main(){
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t') state = OUT;
        else if (state == OUT) {
            state = IN;
            putchar('\n');
        }
        if (state == IN ) putchar(c);
    }
}