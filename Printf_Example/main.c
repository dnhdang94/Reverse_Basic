/*
 * main.c
 *
 *  Created on: Jun 7, 2016
 *      Author: dnhdang94
 */
#include <stdio.h>


char global_char = 1;
short int global_short = 2;
int global_int = 3;
long int global_long = 4;

int main(int argc, char **argv) {
	char local_char = 5;
	short int local_short = 6;
	int local_int = 7;
	long int local_long_int = 8;
	// First
	printf("%hd\n", local_short);
	// Second
	printf("%c, %c\n", global_char, local_char);
	// Third
	printf("%hd, %d, %d\n", global_short, global_int, global_long);
	// Fourth
	printf("%c, %hd, %d, %ld\n", local_char, local_short, local_int, local_long_int);
	return 0;
}
