#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point
 *
 *Return: 0 (Success)
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n > 5)
						printf("Last digit of %d is %d and is greater than 5\n", rand, n);
					else if (n == 0)
						printf("Last digit of %d is %d and is 0\n", rand, n);
					else
						printf("Last digit of %d is %d and is less than 6 and not 0\n", rand, n);

					return (0);

}