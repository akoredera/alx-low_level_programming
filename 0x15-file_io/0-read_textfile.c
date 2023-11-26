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
	FILE *file_n = NULL;
	size_t total_char;
	char ch;

	file_n = fopen(filename, "r");
	if (file_n == NULL)
	{
		return (0);
	}
	total_char = 0;
	while (!feof(file_n))
	{
		ch = fgetc(file_n);
		if (ch == 0)
			return (0);
		total_char++;
		printf("%c", ch);
		if (total_char == letters)
			return (total_char);
	}
	fclose(file_n);
	return (total_char);
}
