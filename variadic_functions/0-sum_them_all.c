#include "variadic_functions.h"
/**
 * sum_them_all - task0
 * @n: int
 * @...: parametros
 * Return: always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list q;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(q, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(q, int);
	}
	va_end(q);

	return (sum);
}
