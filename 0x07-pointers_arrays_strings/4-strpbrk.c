#include "main.h"
/**
 * _strpbrk - func
 * @s: par
 * @accept: par Return: null
 * Return: vo
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}

