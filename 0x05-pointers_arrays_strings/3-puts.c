#include "main.h"

/**
 * _puts - Entry point.
 *
 * Derscription: Prints a string followed by new line.
 * @str: string
 * Return: Always 0
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
