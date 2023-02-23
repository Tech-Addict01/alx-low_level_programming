#include "main.h"
/**
 * print_alphabet_x10 - my function name
 * Description: print alphabet in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		putchar('\n');
	}
}
