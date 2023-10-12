#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: 0 (success) 
 */
int main(void)

{
	int a = 1, b = 2, next, count;

	printf("%d, %d", a, b);

	for (count = 3; count <= 98; count++)
	{
		next = a + b;
		printf(", %d", next);
		a = b;
		b = next;
	}

	printf("\n");
	return (0);
}

