#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: the letters;
 * @letters: number of letters;
 * Return: if filename == NULL return 0, else return the number of letters;
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rt, fr, wr;
	char *c;

	if (filename == NULL)
		return (0);
	rt = open(filename, O_RDONLY);
	if (rt == -1)
		return (0);
	c = malloc(sizeof(char) * (letters));
	if (c == NULL)
		return (0);
	fr = read(rt, c, letters);
	wr = write(STDOUT_FILENO, c, fr);
	close(rt);
	return (wr);
}
