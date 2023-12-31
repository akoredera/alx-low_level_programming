#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: content of the file
 * Return: success 1; otherwise 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd, text_size;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT, 0600);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	text_size = write(fd, text_content, strlen(text_content));
	if (text_size < 0)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
