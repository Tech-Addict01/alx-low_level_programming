#include "main.h"

/**
 * reset_to_98 - changes value of pointer to 98
 * @n: pointer to an int
 * Return: void
 */
void reset_to_98(int *n)
{
	int a = 89;
	int *p = &a;
	*n = *p;

	*n = 98;
}
