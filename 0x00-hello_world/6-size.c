#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	put("Size of a char: %lu byte(s)", sizeof(char));
	put("Size of a int: %lu byte(s)", sizeof(int));
	put("Size of a long int: %lu byte(s)", sizeof(long int));
	put("Size of a long long: %lu byte(s)", sizeof(long long));
	put("Size of a float: %lu byte(s)", sizeof(float));

	return (0);

}
