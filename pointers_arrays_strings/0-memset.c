#include "main.h"
/**
 * *_memset - task0
 * @s: char
 * @b: char
 * @n: int
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int a;

        for (a = 0; a < n; a++)
        {
                s[a] = b;
        }
        return (s);
}
