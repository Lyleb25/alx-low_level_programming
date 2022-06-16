#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Entry point.
 *
 * Derscription: function to concatenate two strings
 *@dest: string 1
 *@src: string 2
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	_putchar('\n');
	return (dest);
}
