#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Description: A C programe thay prints with write function
 *
 * Return: 1
 */

int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, c, 59)
	return (1);
}
