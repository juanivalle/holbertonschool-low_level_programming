#include "main.h"
/**
 * _islower - task3
 * @c: int
 * Return: always 0
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
