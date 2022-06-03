#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	printf("Size of a char: %lu.\n", sizeof(char));
	printf("Size of an int: %lu.\n", sizeof(int));
	printf("size of a long int: %lu.\n", sizeof(long int));
	printf("size of a long long int: %lu.\n" sizeof(long long int));
	printf("Size of a float: %lu.\n" sizeof(float));
	return (0);
}
