#include "main.h"

int main(void)
{
	int a, b;
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < a; b++)
			_putchar('1');
		_putchar('\\');
		_putchar('\n');
	}

	return (0);
}
