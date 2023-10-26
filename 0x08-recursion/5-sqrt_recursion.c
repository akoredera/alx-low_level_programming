int _sqrt_recursion(int n)
{
	int i = 1;
	if (n < 0)
		return -1;
	else if (n == 0)
		return 1;
	else if (i == n)
		return i;
	i = i * _sqrt_recursion(n - 1);
	return i;
}
