#include <stdio.h>
/**
 *main - task4
 *
 *Return: always 0
 */
int main(void)
{
	int Uwu;

	for (Uwu = 'a'; Uwu <= 'z'; Uwu++)
	{
		if (Uwu != 'q' && Uwu != 'e')
			putchar (Uwu);
	}
	putchar ('\n');
	return (0);
}
