/*
 * File: 102-fibonacci.c
 * Auth: Michael Ndungu Kamotho
 */

#include "main.h"

/**
 * 102-fibonacci - prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line
 *
 *
 * Return void
 */
int main(void){
	fibonacci();
	return 0;
}

void fibonacci(void){
	int count,number = 1;
	int prevNumber = 0;
	int fibonacci;
	for(count = 0; count < 50; count++){
	   fibonacci = prevNumber + number;
	   prevNumber = fibonacci;
	   number++;
	   _putchar(fibonacci);

	   _putchar('\n');
	}

}


