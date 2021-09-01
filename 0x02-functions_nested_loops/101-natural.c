/*
 * File: 8-24_hours.c
 * Auth: Michael Ndungu Kamotho
 */

#include "main.h"

/*
 * 8-24_hours.c - prints every miinute of the day 
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int main(void){
	int result;

	result = sumOfNaturalNumbers();
	_putchar(result);
	_putchar('\n');
	return 0;
}
int sumOfNaturalNumbers(void){
	int multiple, sum = 0, i;
	int number = 0;

	for(i = 0; i <= 1024; i++){
	   if(0 == ((number % 3) || (number % 5))){
		multiple = number;
		sum = sum + multiple;
	   }
	   number++;
	}
	return sum;
}
