int prime(int a, int b);
/**
 * is_prime_number - returns 1 if the input integer otherwise 0
 * @n: integer to check
 * Return: integer
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - check if the integer is prime number
 * @a: integer to check
 * @b: iteration
 * Return: 0 or 1
 */
int prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
		return (0);
	else if (a == b)
		return (1);
	else
		return (1);
	return (prime(a, b + 1));
}
