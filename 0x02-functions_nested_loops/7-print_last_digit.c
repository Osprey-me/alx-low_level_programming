/*
 * File: 7-last_digit.c
 * Auth: Michael Ndungu Kamotho
 */

#include "main.h"

/**
 * 7-last_digit.c - prints the last digit of a number
 *
 *
 * Return: last digit
 */

int print_last_digit(int number){
	int last_digit;

	last_digit = number % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
	return last_digit;

}
