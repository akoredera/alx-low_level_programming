#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: text file name
 * @letters: number of letters to read and print
 * Return: number of character printed otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_size, w;
	char *ch = malloc(letters);

	if (ch == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(ch);
		return (0);
	}
	read_size = read(fd, ch, letters);
	w = write(STDOUT_FILENO, ch, read_size);
	close(fd);
	return (w);
}
