#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - check if number is positive or negative
 * @i - input number
 * Return - 1 for positive, -1 for negative, 0 for 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive", i);
	}
	else if (i == 0)
		printf("%d is zero", i);
	else
		printf("%d is negative", i);
}
