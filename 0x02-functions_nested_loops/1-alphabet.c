#include "main.h"

/**
 * main - print the alphabet with _putchar.
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return (0);
}
