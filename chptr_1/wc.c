#include <stdio.h>
/*
	@saulpanders
	wc.c :  bare-bones copy of unix 'wc'
	from "C Programming Language - ch 1 sec 5"
*/

#define IN  1 /* inside a word */
#define OUT 0 /* outside a word */


/* counts lines, words characters in input */
int main(){
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF){
        ++nc;
        if (c == '\n') ++nl;
        if (c == ' ' || c == '\n' || c == '\t') state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}