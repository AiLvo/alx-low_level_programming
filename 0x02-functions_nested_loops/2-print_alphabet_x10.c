#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet x10 times
 * in lowercase followed by a new line
 * Return: Always 0
 */
void print_alphabet_x10(void)
{

	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		ch = 'a';
		while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	}
}
