#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arg
 * @...: arguements
 * Return: success (sum); otherwise 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list num;
	int sum = 0;

	va_start(num, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
