#include "main.h"
/**
 * _memset - funct
 * @s: para
 * @b: para
 * @n: para
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
