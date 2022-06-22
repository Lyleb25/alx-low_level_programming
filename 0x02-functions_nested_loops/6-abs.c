#include "main.h"
#include <stdio.h>

/**
 * _abs - Entry point
 *
 * Description: computes the abslute value of an integer
 *@n: integer to compute
 * Return: 0
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	else if (n >= 0)
	{
		return (n);
	}
	return (0);
}
