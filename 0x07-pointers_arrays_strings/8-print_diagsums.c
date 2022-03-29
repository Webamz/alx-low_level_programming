#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints sum of two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size:size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
