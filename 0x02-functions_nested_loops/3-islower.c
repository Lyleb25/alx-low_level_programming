#include "main.h"

/**
 * int _islower - Entry point
 *
 * Description: Checks if a character is lower case.
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase else 0
 */

int _islower(int c)
{
	int l, lr;

	l = _islower(c);

	if (l == 'a')
	{
		lr = 1;
	}
	else if (l == 'A')
	{
		lr = 0;
	}
	return (lr);
}
