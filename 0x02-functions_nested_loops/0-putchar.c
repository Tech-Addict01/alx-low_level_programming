#include "main.h"
/**
 * main - entry point
 * Description: Print string "_putchar" no use of standard library
 * Return: 0
 */
int main(void)
{
	char *ptr = "_putchar";

	while (*ptr)
	{
		_putchar(*ptr);
		++ptr;
	}
	_putchar('\n');

		return (0);
}
