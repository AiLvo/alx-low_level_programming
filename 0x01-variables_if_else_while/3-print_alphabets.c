#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char lowercase, uppercase;

    for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
    {
        putchar(lowercase);
    }

    for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
    {
        putchar(uppercase);
    }

    putchar('\n');

    return (0);
}

