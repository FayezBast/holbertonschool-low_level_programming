#include "main.h"

/**
 * factorial - Write a function that returns the power  of a given number.
 *
 * @n: This is the input number
 *
 * Return: The value of a given number raised to another
 */
int  _pow_factorial(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	
	return (x^y);
}
