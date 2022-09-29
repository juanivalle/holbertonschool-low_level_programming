#include <stdio.h>
/**
 * main - task9
 *
 * Return: always 0
 */
int main(void)
{
	int boo;

	for (boo = '0'; boo <= '9'; boo++)
	{
		putchar (boo);
		if (boo < '9')
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
