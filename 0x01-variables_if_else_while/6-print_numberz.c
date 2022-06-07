#include <stdio.h>

/**
 * main - Print numbers with only putchar.
 *
 * Return: 0 (Sucess)
 *
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
