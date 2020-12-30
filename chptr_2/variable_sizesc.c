#include <stdio.h>
#include <limits.h>
#include <float.h>

#define MAX_VAR_SIZE 64
/*
	@saulpanders
	variable_sizes.c : built-in variable range checker (w/ calculations)
	from "C Programming Language -  2.1"
*/

void print_var_sizes();
void calc_var_sizes();

int main (){
	printf("Variable ranges from std headers:\n");
	print_var_sizes();

	printf("\n\nVariable ranges from calculations:\n");
	calc_var_sizes();
}

void print_var_sizes(){
	//char
	printf("Char:\nsmin\tsmax\tumin\tumax\n%d\t%d\t%d\t%d\n",SCHAR_MIN,SCHAR_MAX,0,UCHAR_MAX);

	//short
	printf("Short:\nsmin\tsmax\tumin\tumax\n%d\t%d\t%d\t%d\n", SHRT_MIN, SHRT_MAX, 0, USHRT_MAX);
	
	//int
	printf("Int:\nsmin\t\tsmax\t\tumin\t\tumax\n%d\t%d\t%d\t\t%u\n", INT_MIN, INT_MAX, 0, UINT_MAX);
	
	//long
	printf("Long:\nsmin\t\tsmax\t\tumin\t\tumax\n%ld\t%ld\t%d\t\t%lu\n", LONG_MIN, LONG_MAX, 0, ULONG_MAX);

	//note: ints are 32 bit now so long ~=int, long long is a 64 bit var

}

void calc_var_sizes(){
	char sc_min, sc_max = 0;
	unsigned char uc_max = 0;

	short ss_min, ss_max = 0;
	unsigned short us_max = 0;

	int si_min, si_max = 0;
	unsigned int ui_max = 0;

	long sl_min, sl_max = 0;
	unsigned long ul_max = 0;

	long i, j;

	//straight calc for signed stuff (abusing wraparound for signed longs)
	for(i=0; i>=0; i++){
		if ((char)i > sc_max){
			sc_max = (char)i;
		}
		if ((short)i > ss_max){
			ss_max = (short)i;
		}
		if ((int)i > si_max){
			si_max = (int)i;
		}
		if (i > sl_max){
			sl_max = i;
		}

		if ((char)j < sc_min){
			sc_min = (char)j;
		}
		if ((short)j < ss_min){
			ss_min = (short)j;
		}
		if ((int)j < si_min){
			si_min = (int)j;
		}
		if (j < sl_min){
			sl_min = j;
		}		
		j--;
	}
	printf("signed min:\nchar\t\tshort\t\tint\t\tlong\n%hd\t\t%hd\t\t%d\t%ld\n", sc_min, ss_min, si_min, sl_min);
	printf("signed max:\nchar\t\tshort\t\tint\t\tlong\n%hd\t\t%hd\t\t%d\t%ld\n", sc_max, ss_max, si_max, sl_max);
	
	
	//hack for unsigned
	printf("unsigned max:\nchar\t\tshort\t\tint\t\tlong\n%c\t\t%hu\t\t%u\t%lu", (unsigned char) uc_max - 1, us_max - 1, ui_max -1, ul_max-1);



}