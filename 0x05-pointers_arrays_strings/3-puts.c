#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to a char type
 * Return: void
 */
void _puts(char *str)
{
	int chr;

	for (chr = 0; str[chr] != '\0'; chr++)
	{
		_putchar(str[chr]);
	}
	_putchar('\n');
}
