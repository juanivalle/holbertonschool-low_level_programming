#include "main.h"
/**
 * print_last_digit - task7
 * @n: int
 * Return: always 0
 */
int print_last_digit(int n)
{
	int x = (n % 10);
	int y = -x;

	if (n >= 0)
	{
		_putchar (x + '0');
		return (x);
	}
	else
	{
		_putchar (y + '0');
		return (y);
	}
}
