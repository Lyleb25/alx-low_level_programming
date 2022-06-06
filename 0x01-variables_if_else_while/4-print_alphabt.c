#include <stdio.h>

/**
 * main - Print alphabet withou e and q.
 *
 * Return: 0 (Success)
 */

int main(void)
{

	int alph;

	for (alph = 'a'; alph <= 'z'; alph++) | tr -d 'e''q'
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
