#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - entry point
 *
 * Description: return the lenght of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
