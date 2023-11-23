#include <math.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointing to a string
 * Return: unsigned int otherwise NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	unsigned int i;

	for (decimal = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			dec = (dec << 1) | 1;
		else if (b[i] == '0')
			dec <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (decimal);
}
