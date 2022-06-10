#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Description: print 0 to 14 ten times.
 *
 */

void more_numbers(void)
{
	int n, i, c;

	for (i = 1; i <= 10; ++i)
	{
		for (c = 0; c <= 14; ++c)
		{
			n = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				n = c % 10;
			}
			_putchar(n + 48);
		}
	}
}
