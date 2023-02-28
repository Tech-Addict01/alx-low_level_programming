#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: points to a string of char type
 * Return: length.
 */
int _strlen(char *s)
{
	int chars;
	
	for (chars = 0; s[chars] != '\0'; chars++);
	return (chars);
}
	
