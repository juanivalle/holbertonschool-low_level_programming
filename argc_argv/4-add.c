#include "main.h"
/**
 * main - task4
 * @argc: int
 * @argv: char
 * Return: always 0
 */
int main(int argc, char *argv[])
{

	int a, sum = 0;

	if (argc < 1)
		return (0);

	for (a = 1; a < argc; a++)
	{
		if (!atoi(argv[a]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);

	return (0);
}
