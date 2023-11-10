#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: arguement counter
 * @argv: arguement vector in string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	opr = get_op_func(argv[2]);
	if (opr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", opr(a, b));
	return (0);
}
