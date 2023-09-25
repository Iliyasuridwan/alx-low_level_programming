#include "main.h"
/**
 * _memcpy - func
 * @dest: para
 * @src: para
 * @n: para
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
