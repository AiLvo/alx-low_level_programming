#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point. Generates a random number and checks its last digit.
 * Prints if the last digit is greater than 5, less than 6 and not 0, or 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() % 100; // Ensures n is within 0 to 99

    printf("Last digit of %d is %d and is ", n, n % 10);

    if (n % 10 > 5)
    {
        printf("greater than 5\n");
    }
    else if (n % 10 == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("less than 6 and not 0\n");
    }

    return (0);
}

