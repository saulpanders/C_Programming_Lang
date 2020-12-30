/*
	@saulpanders
	getline_copy : getline() and string copy using char arrays
	from "C Programming Language ch1 sec 9 && 1.16"
*/

#include <stdio.h>
#define MAXLINE 1000 /* max input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main(){
    int len, max; 

    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0){
        if (len > max){
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("%s", longest);
    }
}

//getline: read a line into s, return len
int getline(char s[], int lim){
    int c, i;

    for (i=0; i<lim-1 && (c = getchar())!= EOF && c!='\n'; ++i){
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

// copy 'from' into 'to', assume buffer fits 
void copy(char to[], char from[]){
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
}