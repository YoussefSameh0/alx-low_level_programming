#include "main.h"
/**
 * puts_half - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void puts_half(char *str)
{
	int len, i;

	len = 0;

	while (str[len])
	{
		len++;
	}
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
