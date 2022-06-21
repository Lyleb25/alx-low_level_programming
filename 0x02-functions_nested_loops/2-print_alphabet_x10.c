#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n, alph;

	for (n = 0; n < 10; n++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
