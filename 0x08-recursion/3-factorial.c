/**
 * factorial - returns the factorial of a given number
 * @n: given number
 * Return: -1 if 0; i success
 */
int factorial(int n)
{
	int i;

	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	i = n * factorial(n - 1);
	return (i);
}
