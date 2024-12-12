#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: Uses _putchar to print the alphabet
 * followed by a new line.
 */
void print_alphabet(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
      _putchar(ch);
   _putchar('\n');
}
}
