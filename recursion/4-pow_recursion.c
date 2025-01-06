#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: x raised to the power of y.
 *         -1 if y is less than 0.
 */
int _pow_recursion(int x, int y)
{
    if (y == 0) /* Base case: Any number raised to power 0 is 1 */
        return (1);

    if (y < 0) /* Negative exponent case */
        return (-1);

    return (x * _pow_recursion(x, y - 1)); /* Recursive step */
}

