/*
 * File: 3-islower.c
 * Auth: Michael Ndungu Kamotho
 */

#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 *
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _islower(int letter){

	if(letter >= 'a' && letter <= 'z'){
	   return 1;
	}else{
	   return 0;
	}
}
