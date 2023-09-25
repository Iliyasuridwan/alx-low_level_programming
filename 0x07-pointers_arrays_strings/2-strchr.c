#include "main.h"
/**
 * _strchr - func
 * @s: para
 * @c: para
 * Resturn: void
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
