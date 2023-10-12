#include "main.h"

/**
 * Print_last_digit - Prints the last digits of a number
 * @n: The number to be treated
 * Return: Value of last digit
 */
int print_last_digit(int n)

{
	int l;

	l = n % 10;
	if (l < 0)
	{
	l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}

