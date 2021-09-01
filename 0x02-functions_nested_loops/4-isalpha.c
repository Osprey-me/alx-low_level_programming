/*
 * File: 4-isalpha.c
 * Auth: Michael Ndungu Kamotho
 */

#include "main.h"

/**
 * _isalpha - checks if is a letter , lowercase, uppercase
 *
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _isalpha(int letter){

	if((letter >= 'a' && letter <= 'z') || (letter >= '0' && letter <= '9') || (letter >= 'A' && letter <= 'Z')){
	   return 1;
	}else{
	   return 0;
	}
}
