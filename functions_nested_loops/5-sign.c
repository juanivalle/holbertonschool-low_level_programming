#include "main.h"
/**
 * print_sign - task5
 *
 * @n: int
 * Return: always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		_putchar ('-');
		return (1);
	}
	return (0);
}

