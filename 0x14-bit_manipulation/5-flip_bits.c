#include "main.h"
/**
 * flip_bits - sets the value of a bit to 0 at index
 * @n: pointer of an unsigned long int
 * @m: index of the bit
 * Return: 1 for success, -1 for failure
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int m;

	if (m > 63)
		return (-1);
	m = 1 << m;
	if (*n & m)
		*n ^= m;
	return (1);
}
