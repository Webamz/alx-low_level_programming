#include "main.h"
/**
 *_isalpha - check main
 *@c: input character
 *Description: function returns 1 if character is a letter, lowercase or uppercase
 *Return:1 or 0
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
		if (c == lower || c == upper)
		isletter = 1;
		}
	}
	return (isletter);
}
