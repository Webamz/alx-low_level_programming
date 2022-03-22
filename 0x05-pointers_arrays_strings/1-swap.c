#include "main.h"
/**
 * swap_int - function that swaps values of two integers
 * @a: an input integer pointer
 * @b: an input integer pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
