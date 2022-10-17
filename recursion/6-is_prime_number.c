#include "main.h"
int _aguskun(int n, int i);
/**
 * is_prime_number - task5
 * _aguskun - t
 * @n: int
 * Return: always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_aguskun(n, 2));
}
/**
 * _aguskun - t
 * @uwu: int
 * @n:int
 * Return: always 0
 */
int _aguskun(int n, int uwu)
{
	if (n == uwu)
	{
		return (1);
	}
	else if (n % uwu == 0)
	{
		return (0);
	}
	else
	{
		return (_aguskun(n, uwu + 1));
	}
}
