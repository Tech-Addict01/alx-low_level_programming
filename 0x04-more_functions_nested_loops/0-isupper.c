#include "main.h"

/**
 * _isupper - function name
 * Description: checks if letter is uppercase
 * @c: print intiger
 * Return: 1 (success) 0 (fail)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
