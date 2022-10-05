#include "main.h"
/**
 * print_triangle - task10
 * @size: int
 * Return: always 0
 */
void print_triangle(int size)
{
	int a;
	int space;
	int numeral;

	if (size <= 0)
		_putchar ('\n');
	else
	{
		for (a = 0; a < size; a++)
		{
			for (space = a; space < size - 1; space++)
			{
				_putchar (' ');
			}
			for (numeral = a; numeral >= 0; numeral--)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
}
