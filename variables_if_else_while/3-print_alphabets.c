#include <stdio.h>
/**
 * main - task3
 *
 * Return: always 0
 */
int main(void)
{
	int Xd;

	for (Xd = 'a'; Xd <= 'z'; Xd++)
		putchar (Xd);
	for (Xd = 'A'; Xd <= 'Z'; Xd++)
		putchar (Xd);
	putchar ('\n');
	return (0);
}
