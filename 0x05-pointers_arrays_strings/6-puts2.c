#include "main.h"
#include <stdio.h>

/**
 * puts2 -Entry point
 *
 * Description: prints every other character
 * @str: string
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	
	*str = len;

	for (i = 0; i + 2 <= len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
