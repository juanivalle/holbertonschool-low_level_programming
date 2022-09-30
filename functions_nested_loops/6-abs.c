#include "main.h"
/**
 * _abs - task6
 *@x: int
 *
 * Return: always 0
 */
int _abs(int x)
{

	if (x >= 0)
		_putchar (x);
	else
		return (x * -1);
	return (0);
}
