#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point.
 *
 * Description: swap the value of two integers.
 *@a: integer 1
 *@b: integer 2
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
