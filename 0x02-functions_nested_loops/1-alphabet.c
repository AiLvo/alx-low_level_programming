#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 * This function prints all lowercase letters from 'a' to 'z'.
 * Return: Always 0
*/

void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
