#include "main.h"

/**
 * main - print alphabet 10x
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
			alph++;
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
	return;
}