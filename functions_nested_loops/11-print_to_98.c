#include "main.h"
/**
 * print_to_98 - task11
 * @n: int
 * Return: always 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 97; n++)
		{
			printf(" %d, ", n);
		}
		{
		printf("98");
		_putchar ('\n');
		}
	}
	else if (n == 98)
	{
		printf("98\n");
	}
	else
	{
		for (; n >= 99; n--)
		{
			printf("%d, ", n);
		}
		{
			printf("98\n");
		}
	}
}



