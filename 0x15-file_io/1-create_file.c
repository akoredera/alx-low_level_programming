#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: content of the file
 * Return: success 1; otherwise 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		fd = open(filename, O_CREAT, 0600);
	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd < 0)
		return (-1);
	return (1);

}
