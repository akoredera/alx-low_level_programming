#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char letter;

	for (number = 0; number <= 11; number++)
	{
		putchar('0' + number);
		if (number == 9)
			break;
	}
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
