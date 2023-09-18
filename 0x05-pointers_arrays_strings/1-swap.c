#include "main.h"
/**
 * swap_int - function
 * @a: parameter1
 * @b: parameter
 * Return: v void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
