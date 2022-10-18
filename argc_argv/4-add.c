#include "main.h"
/**
 * main - task4
 * @argc: int
 * @argv: char
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int suma;

	suma = 0;
	for (x = 0; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
	suma += atoi(argv[x]);
	}
	printf("%d\n", suma);
	return (0);
}
