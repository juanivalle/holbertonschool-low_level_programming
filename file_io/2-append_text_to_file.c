#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a line
 * @filename: name of the file to create;
 * @text_content: NULL terminated string to write to the file;
 * Return: 1 on success, else -1;
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int cont;
	int w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (!text_content)
		return (1);
	for (cont = 0; text_content[cont]; cont++)
		;
	w = write(fd, text_content, cont);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
