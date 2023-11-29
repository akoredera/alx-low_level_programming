#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @ac: number of arguement
 * @av: string arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd1, fd2, read_size;
	char *ch = malloc(1024), *filename1, *filename2;

	if (ch == NULL)
		return (0);
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(98);
	}
	filename1 = av[1];
	filename2 = av[2];
	fd1 = open(filename1, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Can't read from file %s", filename1);
		exit(98);
	}
	fd2 = open(filename2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Can't write to file %s", filename2);
		exit(99);
	}
	while ((read_size = read(fd1, ch, 1024)) > 0)
	{
		write(fd2, ch, read_size);
	}
	close(fd1);
	close(fd2);
	if (fd1 < 0)
	{
		dprintf(2, "Can't close fd %d", fd1);
		exit(100);
	}
	if (fd2 < 0)
	{
		dprintf(2, "Can't close fd %d", fd2);
		exit(100);
	}
	free(ch);
	return (0);
}