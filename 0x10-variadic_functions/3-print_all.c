#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print anything
 * @format: pointer to a string of format
 * @...: argument list
 * Return: null
 */
void print_all(const char * const format, ...)
{
	va_list my_arg;
	char *format_ptr = (char *)format;
	char *s;

	va_start(my_arg, format);
	while (*format_ptr)
	{
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
				break;
		}
		if (*(format_ptr + 1) != '\0' &&
		(((*format_ptr) == 'c') || ((*format_ptr) == 'f') ||
		 ((*format_ptr) == 's') || ((*format_ptr) == 'i')))
		{
			printf(", ");
		}
		format_ptr++;
	}
	printf("\n");
	va_end(my_arg);
}
