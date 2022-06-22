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
	if (c >= 97 && c <= 122)
		return (1);
	else 
		return (0);
}
