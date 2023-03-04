#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination string for src
 * @src: sstring to be appended to dest
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\n'; x++)
		;
	for (y = 0; src[y] != '\n'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
