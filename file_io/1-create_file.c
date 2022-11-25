#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file to create;
 * @text_content: NULL terminated string to write to the file;
 * Return: 1 on success, else -1;
 **/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int cont;
	int w;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
		printf("fails");
	}
	if (!text_content)
		text_content = "";
	for (cont = 0; text_content[cont]; cont++)
		;
	w = write(fd, text_content, cont);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
