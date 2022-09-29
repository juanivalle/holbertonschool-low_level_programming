#include <stdio.h>
/**
 * main - task8
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	char x;

	for (n = '0'; n <= '9'; n++)
		putchar (n);
	for (x = 'a'; x <= 'f'; x++)
		putchar (x);
	putchar ('\n');
	return (0);
}
