#include <stdio.h>

/**
 * main - entry point
 *
 * Description : A C programe that prints with put function
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	char c = 'a';

	for (; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
