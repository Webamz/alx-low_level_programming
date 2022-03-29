#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to search
 * @a: string containing bytes to look for
 * Return: pointer to byte in s that matches bytes in a 
 * or NULL if no such byte found
 */
char *_strpbrk(char *s, char *a)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (*s == a[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
