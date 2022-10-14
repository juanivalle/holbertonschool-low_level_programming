#include "main.h"
/**
 * main - task0
 *
 * Return: always 0
 */
int main(void)
{
	char str[] = "_putchar";
	int x;

	for (x = 0; str[x] != '\0'; x++)
		_putchar (str[x]);
	_putchar ('\n');
	return (0);
}
