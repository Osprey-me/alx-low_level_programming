/*
 * File: 5-sign.c
 * Auth: Michael Ndungu Kamotho
 */

#include "main.h"

/**
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 *
 */

int print_sign(int letter){

	if(letter > '0'){
	   _putchar('+');
	   return 1;

	}else if(letter == 0){
	   _putchar('0');
	   return 0;

	}else{
	   _putchar('-');
	   return -1;
	}
}
