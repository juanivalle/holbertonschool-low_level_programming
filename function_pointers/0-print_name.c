#include "function_pointers.h"
/**
 * print_name - task0
 * @name: char
 * @f: char
 * Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
