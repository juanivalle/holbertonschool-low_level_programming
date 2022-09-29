#include "main.h"
/**
 * print_alphabet_x10 - task2
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		print_alphabet();
		_putchar ('\n');
	}
}
