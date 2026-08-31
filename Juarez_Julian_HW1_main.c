/**************************************************************
* Class::  CSC-415-01 Fall 2026
* Name:: Julian Juarez
* Student ID:: 923162354
* GitHub-Name:: JulianJua
* Project:: Assignment 1 – Command Line Arguments
*
* File:: <Juarez_Julian_HW1_main.c>
*
* Description:: 
*
**************************************************************/
#include <stdio.h>

int main(int args, char *argv[]) {
	printf("There were %d arguments on the command line.\n", args);
	
	for (int i = 0; i < args; i++) {
		printf("Argument %d: \t%s\n", i, argv[i]);
	}
	return 0;
}
