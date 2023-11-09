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
	char *temp_str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		temp_str = va_arg(str, char *);
		if ((i + 1) == n)
		{
			if ((i + 1) == n && temp_str)
				printf("%s", temp_str);
			else if ((i + 1) == n && !(temp_str))
				printf("(nil)");
		}
		else if (!(separator))
			printf("%s", temp_str);
		else if (!(temp_str))
			printf("(nil)%s", separator);
		else
				printf("%s%s", temp_str, separator);
	}
	va_end(str);
	printf("\n");
}
