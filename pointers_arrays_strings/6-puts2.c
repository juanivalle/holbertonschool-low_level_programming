#include "main.h"
#include <string.h>
/**
 * puts2 -task6
 * @str: char
 * Return: always 0
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			printf("%c", str[a]);
	}
	_putchar ('\n');
}
