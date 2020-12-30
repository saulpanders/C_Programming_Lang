#include <stdio.h>

/*
	@saulpanders
	12/06/20
	count_space_tab_line.c : prints spaces, tabs, and lines in input
	from "C Programming Language - 1.8 "
*/

int main() {

   
    int c;
    int space_count = 0;
    int tab_count = 0;
    int line_count = 0;

    while ((c = getchar()) != EOF){
        if (c == '\n') ++line_count;
        if (c == '\t') ++tab_count;
        if (c == ' ') ++space_count;
    }

    printf("Lines:\t%d\n", line_count);
    printf("Tabs:\t%d\n", tab_count);
    printf("Spaces:\t%d\n", space_count);

    return 0;
}