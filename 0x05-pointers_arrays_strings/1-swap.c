#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a:pointer to an integer
 * @b: pointer to an integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m = 98;
	int n = 42;
	int *p = &m;
	int *q = &n;

	*a = *p;
	*b = *q;
	*a = 42;
	*b = 98;
}
