#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lower and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char az[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;

    for (i = 0; i < 52; i++)
    {
        putchar(az[i]);
    }
    putchar('\n');
    return (0);
}
