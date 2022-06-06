#include <stdlib.h>
#include <time.h>

/* 
 * main - Prints out if the last digit is
 * larger than 5,
 * less than 5 equals to 0,
 * less than 6 and large than 0,
 *
 * Return:  0 (Success)
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n > 5)
						printf("Last digit of %d is %d and is greater than 5\n", n);
					else if (n == 0)
						printf("Last digit of %d is %d and is 0\n", n);
					else if (n < 6 && != 0)
						printf("Last digit of %d is %d and is less than 6 but not 0\n", n);


					return (0);

}
