#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point.
 *
 * Description: function that returns the length  of a string.
 *@s: the string
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != 0)
	{
		count++;
		s++;
	}
	return (0);
}
