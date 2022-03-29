#include "main.h"
/**
 * _strspn - gets the length of a pprefix substring
 * @s: string to evaluate
 * @a: string containing list of characters to match in s
 * Return: number of bytes in initial segment
 * of s which consist only of bytes from a
 */
unsigned int _strspn(char *s, char *a)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (f);
	}
	return (0);
}
