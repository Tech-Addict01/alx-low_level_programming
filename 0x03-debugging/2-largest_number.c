#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first intiger
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b>c)
	{
		largest = a;
	}
	else if (b > c && c > a)
	{
		largest = b;
	}
	else if (c > b && b > a)
 	{
		largest = c;
	}
	return (largest);
}
