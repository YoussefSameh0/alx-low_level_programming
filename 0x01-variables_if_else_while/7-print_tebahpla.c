#include <stdio.h>

/**
 * main - entry point
 *
 * Description : A C programe thay prints with put function
 *
 * Return: 0
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
