#include "main.h"
#include <stdio.h>
/**
 * main - 
 * Return: Always 0
 */
int main(void)
{
	char sl[98];
	char *p;

	p = _strcpy(sl, "First, solve the problem. Then, write the code\n");
	printf("%s", sl);
	printf("%s", p);
	return (0);
}
