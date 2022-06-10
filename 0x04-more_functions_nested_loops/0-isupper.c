#include "main.h"
#include <stdio.h>

/**
 * _isupper - Entry point
 *
 * Description: check for uppercase character.
 *@c: character to be checked
 *
 * Return: 1 if uppercase, otherwise 0
 *
 */

int _isupper(int c)

{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
