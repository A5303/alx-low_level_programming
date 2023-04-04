#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @g: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *g, int size)
{
	int sum1, sum2, q;

	sum1 = 0;
	sum2 = 0;

	for (q = 0; q < size; q++)
	{
		sum1 = sum1 + g[q * size + q];
	}

	for (q = sizse - 1; q >= 0; q--)
	{
		sum2 += g[q * size + (size - q - 1)];
	}

	printf"(%d, %d\n", sum1, sum2);
}
