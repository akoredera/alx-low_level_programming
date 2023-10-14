#include "stdio.h"

/**
 * prime_factors - accept a value to find it prime factors
 * @a: value to find it prime factor
 *
 * Return: b as the largest prime factor
 */
long int prime_factors(long int a)
{
	long int b;

	while (a % 2 == 0)
	{
		b = 2;
		a = a / 2;

	}

	for (b = 3; b * b <= a; b += 2)
	{
		while (a % b == 0)
		{
			b = a;
			a = a / b;
		}
	}
	if (a > 2)
		b = a;
	return (b);
}

/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
	long int n = 612852475143;

	printf("%li \n", prime_factors(n));
	return (0);
}
