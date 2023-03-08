#include "main.h"

/**
 * _memest - fills the memory with a constant byte
 * @s: pointer (char type) to memory area
 * @b: char type parameter (the constant byte)
 * @n: bytes of the memory area
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
