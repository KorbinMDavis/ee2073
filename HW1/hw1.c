/*
*
*	EE2073
*	Homework 1
*	
*	I certify that the code below is my own work.
*	Korbin Davis xya241
*
*/

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

// Take a name as a string input and output Hello with the name
void PrintHello(char name[]) {
	printf("Howdy, %s!\n", name);
}



// Main function runs the PrintHello() function
int main(void) {
	PrintHello("Mr. Applonie");
	
	return 0;
}