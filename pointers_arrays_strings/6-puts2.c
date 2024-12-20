#include "main.h"
/**
 *_strlen - reset number
 *Description: This function return a length for some string
 *@s: pointer char
 *Return: int length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
/**
 *puts2 - check the code for Holberton School students.
 *@s: pointer parameter
 *Description: This function prints pair number
 *Return: Always Nothing.
 */
void puts2(char *s)
{
	int i;

	for (i = 0 ; i < _strlen(s); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
