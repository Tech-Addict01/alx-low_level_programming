#include "main.h"
/**
 * print_numbers - prints numbers from 0-9 followed by nw line
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
