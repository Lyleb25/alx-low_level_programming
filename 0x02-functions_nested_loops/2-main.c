
#include "main.h"

/**
 * main - print alphabet 10x
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 0, alph;

	while (n <= 10)
		n++;
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
			alph++;
		}

		_putchar('\n');
		
	}
	return (0);
}
