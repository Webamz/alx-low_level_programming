#include "main.h"
/**
 * _strlen - function that returns length of a string
 * @s: inout string
 * Return: nothing
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
