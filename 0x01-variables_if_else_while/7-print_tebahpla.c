#include <stdio.h>

/**
 * main - Alphabet in reserve.
 *
 * Return: 0 (Sucess)
 *
 */
int main(void)
{
	int alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
