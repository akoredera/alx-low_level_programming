#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: separator
 * @n: number of arg
 * @...: arguements
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		if ((i + 1) == n)
			printf("%s", va_arg(str, char *));
		else if (!(separator))
			printf("%s", va_arg(str, char *));
		else
			printf("%s%s", va_arg(str, char *), separator);
	}
	va_end(str);
	printf("\n");
}
