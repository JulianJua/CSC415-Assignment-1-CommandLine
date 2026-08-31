/**************************************************************
* Class::  CSC-415-01 Fall 2026
* Name:: Julian Juarez
* Student ID:: 923162354
* GitHub-Name:: JulianJua
* Project:: Assignment 1 – Command Line Arguments
*
* File:: <Juarez_Julian_HW1_main.c>
*
* Description:: Program prints the count of command-line arguments and its corresponding arguments
* Count and arguments are subsequently newlined for format. 
*
**************************************************************/
#include <stdio.h> 

int main(int args, char *argv[]) { // array of pointers, C has no string type, so we use char pointers to represent strings
	printf("\n");
	printf("There were %d arguments on the command line.\n", args); 
	
	for (int i = 0; i < args; i++) { // loop from 0 to args - 1, staying within bounds of the array
		printf("Argument %02d: \t%s\n", i, argv[i]); // %02d for format, 0 for padding, 2 for width
	}
	return 0;
}
