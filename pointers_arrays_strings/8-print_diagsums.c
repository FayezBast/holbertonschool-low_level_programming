#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of the two diagonals
 *@a: Pointer parameter
 *@size: int parameter
 *Description: prints the sum of the two diagonals
 *Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int cont = 1;
	int i = 0;
	int sum;
	int aux_size = size;

	while (cont <= 2)
	{
		sum = 0;
		while (size > 0)
		{
			sum += a[i];
			size--;
			if (cont == 1)
			{
				i += aux_size + 1;
			} else
			{
				i += aux_size - 1;
			}
		}
		if (cont == 1)
		{
			printf("%d, ", sum);
		} else
		{
			printf("%d\n", sum);
		}
		cont++;
		size = aux_size;
		i = size - 1;

	}
}
