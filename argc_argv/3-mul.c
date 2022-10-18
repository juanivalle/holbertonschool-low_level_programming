#include "main.h"
/**
 * main - task3
 * @argc: int
 * @argv: char
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int total;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);

		total = (x * y);
			printf("%d\n", total);
	}
	return (0);
}
