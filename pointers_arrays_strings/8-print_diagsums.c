#include "main.h"
/**
*print_diagsums - task7
*@a: int
*@size: int
*Return: always 0
*/
void print_diagsums(int *a, int size)
{
	int x, suma1 = 0, suma2 = 0;

	for (x = 0; x < (size * size); x++)
	{
		if (x % (size + 1) == 0)
			suma1 += *(a + x);
		if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
			suma2 += *(a + x);
	}
	printf("%d, %d\n", suma1, suma2);

}
