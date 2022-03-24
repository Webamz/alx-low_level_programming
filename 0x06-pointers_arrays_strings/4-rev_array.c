#include "main.h"
/**
 * reverse_array - function to reverse array
 * @a: elements to reverse
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
