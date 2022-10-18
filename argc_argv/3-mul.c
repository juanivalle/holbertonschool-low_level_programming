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

	if (argc < 2)
	{
		return (1);
	}
	total = (int) *argv[1] * (int) *argv[2];
	printf("%d\n", total);
	return (0);
}
