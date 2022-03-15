#include "main.h"
/**
 * _islower - check main
 * @c: character input
 * Description: function uses _putchar to print alphabet in lowercase 10 times
 * Return: 1 for lowercase 0 for uppercase
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}

