
#include <stdio.h>

/*
	@saulpanders
	histogram_word_len.c : prints horizontal histogram of word lengths in inputs 
	from "C Programming Language - 1.13"
*/

#define IN              1   /* inside a word */
#define OUT             0   /* outside a word */
#define MAX_WORD_LEN    50  /* max word len */

int main()
{
	int c, i, j, state, word_len;
    int word_lens[MAX_WORD_LEN] = {0};

    state = OUT;
    word_len = 0;
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT; // whitespace - outside a word
            word_lens[word_len] +=1;
        }
        else if (state == OUT) {
            state = IN; //in a new word
            word_len = 1;
        }
        else{
            //not whitespace, not new word.. so must be still in a word
            ++word_len;
        }
    }
/*
    for (i=0; i< 50; i++){
        printf("%d %d\n", i, word_lens[i]);
    }

*/
    for(i= 0; i < 50; i++){
        printf("%d:|", i);
        for(j = 0; j < word_lens[i]; j++){
            putchar('*');
        }
        putchar('\n');
    }
    
}