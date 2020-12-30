/*
	@saulpanders
	reverse_lines.c: reverse input one line at a time
	from "C Programming Language 1.19"
*/

#include <stdio.h>
#define MAXLINE 1000 /* max input line length */

int getline(char line[], int maxline);
int stringlen(char *p);
void reverse(char buff[]);

/* reverses input, one line at a time */
int main(){
    int len;

    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0){
        reverse(line);
        printf("%s", line);
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

// reverses char buffer in place using pointers
void reverse(char *s)
{
   int length, c;
   char *begin, *end, temp;
 
   length = stringlen(s);
   begin  = s;
   end    = s;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}
 
 //quick and dirty str len
int stringlen(char *p)
{
   int c = 0;
 
   while( *(p + c) != '\0' )
      c++;

   return c;
}