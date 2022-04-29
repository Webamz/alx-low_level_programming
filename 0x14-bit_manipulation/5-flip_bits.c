#include "main.h"
/**
 * flip_bits - sets the value of a bit to 0 at index
 * @n: pointer of an unsigned long int
 * @m: index of the bit
 * Return: 1 for success, -1 for failure
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int mb;

	for (mb = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			mb++;
	}
	return (mb);
}
