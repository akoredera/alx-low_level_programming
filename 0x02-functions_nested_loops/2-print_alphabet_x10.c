#include "main.h"
/**
  * print_alphabet - Make the alphabet
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	char letter;
	int t;

	for (t = 0; t < 10; t++){
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
