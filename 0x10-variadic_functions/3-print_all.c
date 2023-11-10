#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print anything
 * @format: pointer to a string of format
 * @...: argument list
 */
void print_all(const char * const format, ...)
{
	va_list my_arg;
	char *format_ptr = (char *)format;
	char *s;
	int check;

	va_start(my_arg, format);
	while (*format_ptr && *format_ptr != '\0')
	{
		check = 0;
		switch (*format_ptr)
		{
			case 'c':
				putchar(va_arg(my_arg, int));
				break;
			case 'f':
				printf("%f", va_arg(my_arg, double));
				break;
			case 'i':
				printf("%i", va_arg(my_arg, int));
				break;
			case 's':
				s = va_arg(my_arg, char *);
				if (!(s))
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				check = 1;
				break;
		}
		if ((*(format_ptr + 1) != '\0') && check == 0)
			printf(", ");
		format_ptr++;
	}
	va_end(my_arg);
	printf("\n");
}
