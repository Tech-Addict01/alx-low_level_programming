#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet in lowercase ommiting q and e
 * Return: 0
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}


