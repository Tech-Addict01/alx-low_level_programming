#include "main.h"
/**
 * main - entry point
 * Description: Printf the string "_putchar" wothout the use of standard library
 * Return: 0
 */
int main(void)
{
	char* ptr = "_putchar";

	while (*ptr)
	{
		_putchar(*ptr);
		++ptr;
	}
	_putchar('\n');

		return (0);
}
