#include "main.h"
int _matigod(int n, int i);
/**
 * _sqrt_recursion - task5
 * _matigod - t
 * @n: int
 * Return: always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_matigod(n, 0));
}
/**
 * _matigod - t
 * @i: int
 * @n:int
 * Return: always 0
 */
int _matigod(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_matigod(n, i + 1));
	}
}
