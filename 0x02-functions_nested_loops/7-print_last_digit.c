#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: prints int
 * Return: Last digit
 */
int print_last_digit(int a)
{
	int last;

	last = a % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');  /*to convert the last digit to its char form*/
	return (last);
}
