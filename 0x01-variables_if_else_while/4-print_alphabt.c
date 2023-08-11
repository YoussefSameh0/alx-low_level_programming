#include <stdio.h>

/**
 * main - entry point
 *
 * Description : A C programe thay prints with putchar function
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	    if (c != 'e' && c != 'q')
	    {
		putchar(c);
	    }
		c++;
	}
	putchar('\n');
	return (0);
}
