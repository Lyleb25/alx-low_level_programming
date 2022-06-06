#include <stdio.h>

/**
 * main - Putchar program to print alphabet.
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}

		putchar('\n');
	return (0);
}
