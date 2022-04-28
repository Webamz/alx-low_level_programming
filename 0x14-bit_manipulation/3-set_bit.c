#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at index
 * @index: index of the bit
 * @n: pointer of an unsigned long int
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n = (*n | m);
	return (1);
}
