#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        /* Print the current letter using putchar */
        putchar(letter);
        /* Move to the next letter */
        letter++;
    }

    /* Print a new line using putchar */
    putchar('\n');

    return (0);
}

