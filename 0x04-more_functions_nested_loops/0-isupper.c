#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: inout character
 * Return: 1 if c is uppercase or otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
