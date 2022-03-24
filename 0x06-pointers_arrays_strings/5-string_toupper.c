#include "main.h"
/**
 *  *sring_toupper - function that changes all lowercase characters
 *  to upper case
 *  @s: string evaluated
 *  Return: uppercase string
 */
char *string_toupper(char *s)
{
	int i, placement;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] => 'a' && s[i] <= 'z')
		{
			placement = 26 - ('z' - s[i]);
			s[i] = placement + 64;
		}
	}
	return (s);
}
