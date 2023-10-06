#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the lowercase alphabet followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char az[26] = "abcdefghijklmnopqrstuvwxyz"; // Array containing the alphabet
    int i;

    for (i = 0; i < 26; i++)
    {
        putchar(az[i]); // Print each character of the alphabet
    }

    putchar('\n'); // Print a newline character

    return (0);
}

