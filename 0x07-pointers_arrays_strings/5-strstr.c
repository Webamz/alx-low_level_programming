#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @h : string to search in
 * @n: substring to search for
 * Return: pointer the to beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *h, char *n)
{
	int i, j;

	for (i = 0; h[i] != '\0'; i++)
	{
		for (j = 0; n[j] != '\0'; j++)
		{
			if (h[i + j] != n[j])
				break;
		}
		if (!n[j])
			return (&h[i]);
	}
	return (NULL);
}
