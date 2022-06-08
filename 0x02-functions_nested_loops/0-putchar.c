#include "main.h"

/**
 * main - prints _putchar.
 *
 * Return: 0 (Sucess)
 */

int main(void)
{
	char *n = "_putchar";

	while (*n) _putchar(*n++);
	_putchar('\n');
	return (0);
}

