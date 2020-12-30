#include <stdio.h>

/*
	@saulpanders
	show_backspace_backslash_tab.c :  makes tabs (\t), backspaces (\b), backslashes (\\) visible
	from "C Programming Language - 1.10"
*/

int main (){
	int c;
	
	while ((c = getchar()) != EOF){
		if (c == '\t'){
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b'){
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\'){
            putchar('\\');
            putchar('\\');
        }
        else{
            putchar(c);
        }
	}

	return 0;
}