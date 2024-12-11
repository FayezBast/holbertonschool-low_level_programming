#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *
 * Description: Calls print_alphabet 10 times to print the alphabet
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        print_alphabet();
    }
}

