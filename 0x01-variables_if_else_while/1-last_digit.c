#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Program to print if, else if or else result.
 *
 * Return: 0 (Success)
 */

int main(void)

{

		int n, last;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				last = (n % 10);

					if (n > 5)
						printf("Last digit of %d is %d and is greater than 5\n", n, last);
					else if (n == 0)
						printf("Last digit of %d is %d is 0\n", n, last);
					else if (n < 6 && -ne 0)
						printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);

					return (0);

}
