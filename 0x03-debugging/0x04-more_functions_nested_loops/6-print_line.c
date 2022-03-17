#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * followed  bya new line
 * @n: input integer
 * Return: Always
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
