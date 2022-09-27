#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals
 *
 * @a: array to use
 *
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag0 = 0;
	int diagT = 0;

	for (i = 0; i < size; i++)
	{
		diag0 += a[(i * size) + i];
		diagT += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diag0, diagT);
}

