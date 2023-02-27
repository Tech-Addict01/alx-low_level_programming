#include "main.h"

/**
 * _abs - compute the absolute value of integer
 *
 * Return: Always 0.
 */
int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		return (-a);
	}
	else
	{
		return (0);
	}
}
