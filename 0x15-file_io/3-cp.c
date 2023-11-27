#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void cp_file_from_and_file_to(const char *filename1, const char *filename2);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
        if (ac != 3)
        {
                dprintf(2, "Usage: cp file_from file_to\n");
                exit(98);
        }
        cp_file_from_and_file_to(av[1], av[2]);
        return (0);
}


void cp_file_from_and_file_to(const char *filename1, const char *filename2)
{
	int fd1, fd2, read_size;
	char *ch = malloc(1024);

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
	read_size = read(fd1, ch, 1024);
	write(fd2, ch, read_size);
	close(fd2);
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
}
