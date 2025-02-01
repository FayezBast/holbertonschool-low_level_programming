#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to a string containing 0 and 1 characters.
 *
 * Return: The converted number, or 0 if b is NULL or contains invalid characters.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;

    if (!b)
        return (0);

    while (*b)
    {
        if (*b != '0' && *b != '1')
            return (0);
        
        num = (num << 1) | (*b - '0');
        b++;
    }

    return (num);
}

/* Example usage */
int main(void)
{
    const char *binary = "1011";
    printf("%u\n", binary_to_uint(binary)); // Output: 11
    return 0;
}
