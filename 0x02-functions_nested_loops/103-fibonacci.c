#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers
 * on values less than 4000000
 * Return: nothing!
 */
int main(void)
{
	int i = 0;
	long j = 1, a = 2, sum = a;

	while (a + j < 4000000)
	{
		a += j;
		if (a % 2 == 0)
		sum += a;
		j = a - j;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
