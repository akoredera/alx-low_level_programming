/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: 1st integer
 * @y: 2nd integer
 * Return: -1 if less than 0; i success
 */
int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	i = x * _pow_recursion(x, y - 1);
	return (i);
}
