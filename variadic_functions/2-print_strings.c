#include "variadic_functions.h"
/**
 * print_strings - task2
 * @separator: char
 * @n: int
 * @...: parametros
 */
void print_strings(const char *separator, const unsigned int n, ...)
{	unsigned int i;
	va_list q;
	char *str;

	va_start(q, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(q, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
			if (separator != NULL && i != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
