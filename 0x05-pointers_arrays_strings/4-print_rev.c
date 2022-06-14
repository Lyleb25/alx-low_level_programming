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
	int i, count;

	count = 0;
		for (i = 0; s[i] != 0; i++)
		{
			count += 1;
		}
		for (; count >= 0; count--)
		{
			_putchar(s[count]);
		}
		_putchar('\n');
}
