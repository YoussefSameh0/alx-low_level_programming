#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description : A C programe that ---
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
	putchar('\n');
	return (0);
}
