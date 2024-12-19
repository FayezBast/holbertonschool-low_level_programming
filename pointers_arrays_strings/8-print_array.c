#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, 
 *               followed by a new line.
 * @a: Pointer to the input array.
 * @n: The number of elements to print.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
    int index;

    for (index = 0; index < n; index++)
    {
        printf("%d", a[index]);
        if (index != (n - 1))
        {
            printf(", ");
        }
    }
    putchar('\n');
}
