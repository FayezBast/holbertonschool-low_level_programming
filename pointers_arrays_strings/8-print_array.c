#include "main.h"
#include <stdio.h>
/**
 *print_array - reset number
 *Description: This function get an array and print n elements
 *@a: pointer char
 *@n: int parameter
 *Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf("%s", ", ");
		}
	}
	printf("\n");
}
