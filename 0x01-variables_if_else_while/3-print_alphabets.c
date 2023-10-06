#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char cap_letter = 'A';

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (cap_letter = 'A'; cap_letter <= 'Z'; cap_letter++)
		putchar(cap_letter);
	putchar('\n');

	return (0);
}
