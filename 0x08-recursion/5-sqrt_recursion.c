int sqrtfunc(int a, int b);
/**
 * _sqrt_recursion - return square root of integer
 * @n: integer
 * Return: value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrtfunc(n, 0));
}
/**
 * sqrtfunc - return sqrt figure
 * @a: value to check
 * @b: counter and the output
 * Return: actual root value
 */
int sqrtfunc(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b >= a)
		return (-1);
	return (sqrtfunc(a, b + 1));
}
