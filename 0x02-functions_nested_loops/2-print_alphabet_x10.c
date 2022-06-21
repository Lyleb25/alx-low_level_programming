#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n = 0, alph;

	while (n <= 10)
		n++;
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
		alph++;
	}
}
