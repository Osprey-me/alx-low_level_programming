
/*
*File 0-holberton.c
*Auth: Michael Ndungu
*
*/
#include "main.h"


/*
*print_alphabet - calls the print_alphabet function.
*
*Return: Always 0
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		_putchar(letter);

	_putchar('\n');

}
