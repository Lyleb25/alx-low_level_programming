#include "main.h"



/**
 *
 *  * main - print alphabet
 *
 *   *
 *
 *    * Return: Always 0
 *
 *     */
void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}

	_putchar('\n');

	    print_alphabet();

	        return;

}
