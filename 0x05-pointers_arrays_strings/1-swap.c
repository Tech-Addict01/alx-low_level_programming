#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a:pointer to an integer
 * @b: pointer to an integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = 98;
	int y = 42;
	int *p = &x;
	int *q = &y;

	*a = *q;
	*b = *p;
}


