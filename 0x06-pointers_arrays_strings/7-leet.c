#include "main.h"
/**
 * leet - function encodes a string into 1337
 * @s: string to evaluate
 * Return: new string
 */
char *leet(char *s)
{
	int i, j;
	char leet[] = "oO1L22eEaA5566tT";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 16; j++)
		{
			if (s[i] == leet[j])
				s[i] = j / 2 + '0';
		}
	}
	return(s);
}
