#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of times table to print.
 * Return: void
 */

void print_times_table(int n)
{
    int x, y, z;

    if (n < 0 || n > 9) {
        return;
    }

    for (x = 0; x <= n; x++) {
        for (y = 0; y <= n; y++) {
            z = x * y;
            if (y != 0) {
                _putchar(44);
                _putchar(32);
                if (z < 10) {
                    _putchar(32);                }
            }
            if (z < 10) {
                _putchar(32);
            } else if (z >= 100) {
                _putchar((z / 100) + '0');
                _putchar(((z / 10) % 10) + '0');
            } else {
                _putchar((z / 10) + '0'); 
            }
            _putchar((z % 10) + '0'); 

            if (y == n) {
                _putchar('\n');
          }
        }
    }
}

