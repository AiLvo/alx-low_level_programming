#include <stdio.h>

/**
 * main - Prints single digit numbers of base 10 in a single line.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d ", i);  // Removed '\n', added space to separate numbers
    }

    printf("\n");  // Added newline at the end to move to the next line

    return (0);
}
