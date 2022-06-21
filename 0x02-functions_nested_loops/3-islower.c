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
	int c;

	for (c = 'A'; c <= 'Z'; c++)
	{
		_putchar(0);
	}
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(1);
	}
	_putchar('\n');
	return ();
}
