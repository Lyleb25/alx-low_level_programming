#include <stdio.h>

/**
 * main - Print alphabet in lower and upper case.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int alph;
	
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
