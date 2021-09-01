/*
 * File: 6-abs.c
 * Auth: Michael Ndungu Kamotho
 */

#include "main.h"

/**
 * 6-abs - computes the absolute valuie of an integer
 * Return: -value if number is negative.
 * Return: value if positive
 */

int _abs(int value){
	if(value < 0){
	   return -value;
	}

	return value;
}
