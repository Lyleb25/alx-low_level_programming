#include "main.h"
#include <stdio.h>

/**
 * void reset_to_98 - Entry point
 *
 * Description:  pointer to an int as parameter and updates the value to 98
 *
 * Return: Nothing
 */

void reset_to_98(int n)
{
	int n;

	n = 402;
	{
		_putchar("n = %d", n);
	}
	*n = 98;
	{
		_putchar("n = %d", n);
	}
	
}
