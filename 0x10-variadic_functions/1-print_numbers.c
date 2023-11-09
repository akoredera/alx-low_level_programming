#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: number of arg
 * @...: arguements
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if ((i + 1) == n)
			printf("%d\n", va_arg(num, int));
		else
			printf("%d%s", va_arg(num, int), separator);
	}
	va_end(num);
}
