#include "main.h"

/**
 * print_diagonal - prints a character diagonally
 * @n: int variable
 * Return: void.
 */
void print_diagonal(int n)
{
	int i;
	int j;
	char c;

	c = '\\';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				for (j = 0; j <= i - 1; j++)
				{
					_putchar(' ');
				}
			}
			_putchar(c);
			_putchar('\n');
		}
	}
}
