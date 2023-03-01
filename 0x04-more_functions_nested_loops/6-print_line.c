#include "main.h"

/**
 * print_line - prints a line
 * @n: Interger variable
 * Return: void.
 */
void print_line(int n)
{
	int a;
	char c;
	c = '_';

	if (n <= 0){
		_putchar('\n');
	}
	else 
	{
		for (a = 0; a < n; a++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
