#include "main.h"

/**
 * _isupper - checks for upper case charcter
 * @c: the function parameter
 * Return: 1 if its upper
 */
int _isupper(int c)
{
if (c >= 'A' && c < 'Z')
	return (1);
else
	return (0);
}
