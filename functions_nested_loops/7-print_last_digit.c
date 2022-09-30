#include "main.h"
/**
 * print_last_digit - task7
 * @n: int
 * Return: always 0
 */
int print_last_digit(int n)
{
	if (n >= 0)
		return (n % 10);
	else
		return (n % 10 * -1);
}
