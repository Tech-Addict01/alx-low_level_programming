#include "main.h"

/**
 * print_square - function that prints a square
 * @size: integer type parameter(square size
 * Return: void
 */
void print_square(int size)
{
	int i, j;
	char c;

	c = '#';
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(c);
			}
			_putchar('\n');
		}
	}
}
