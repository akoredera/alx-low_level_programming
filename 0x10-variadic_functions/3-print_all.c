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
	char *s;
	int check, i = 0;

	va_start(my_arg, format);
	while (format != NULL && format[i] != '\0')
	{
		check = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(my_arg, int));
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
		if (format[i + 1] != '\0' && check == 0)
			printf(", ");
		i++;
	}
	va_end(my_arg);
	printf("\n");
}
