#include "main.h"
#include <stdio.h>

/**
 * print_rev - Entry point
 *
 * Description: print string in reverse.
 * @s: characters to print.
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while ((len - 1) >= 0)
	{
		_putchar(s[len]);

		len--;
	}
	_putchar(10);
}
