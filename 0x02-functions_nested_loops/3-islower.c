#include "main.h"
/**
 * islower - function
 * @c : parameter for check
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
