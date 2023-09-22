#include "main.h"
/**
 * _strncat - concatination
 * @dest: para
 * @src: para
 * @n: para
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
