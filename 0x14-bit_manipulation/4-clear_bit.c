#include "main.h"

/**
 * clear_bit - returns the value of a bit at a given index.
 * @n: address of the  input.
 * @index: index of the bit.
 *
 * Return: 1 otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
		return (-1);
	i = 1 << index;
	*n = (*n & ~i);
	return (1);
}
