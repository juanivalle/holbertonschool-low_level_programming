#include "main.h"
/**
 * print_alphabet_x10 - task2
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int x;
	char z;


	for (x = 0; x <= 9; x++)
	{
		for (z = 'a'; z <= 'z'; z++)
			_putchar (z);
		_putchar ('\n');
	}
}
