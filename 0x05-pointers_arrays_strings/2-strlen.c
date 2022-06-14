#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point.
 *
 * Description: function that returns the length  of a string.
 *@s: the string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;
	char s;

	*s = "My first strlen!";

	while (*s != 0)
	{
		len++;
		s++;
	}
	return (len);
}
