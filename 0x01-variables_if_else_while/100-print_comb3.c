#include <stdio.h>

/**
 * main - Prints all possible different combinations of two-digit numbers
 *
 * Return: Always 0.
 */
int main(void)
{
    int n, o;

    for (n = 48; n < 58; n++)
    {
        for (o = 48; o < 58; o++)
        {
            if (o > n)
            {
                putchar(n);
                putchar(o);

                if (n != 56 || o != 57)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');
    return (0);
}
