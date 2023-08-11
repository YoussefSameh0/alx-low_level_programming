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
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	return (0);
}

