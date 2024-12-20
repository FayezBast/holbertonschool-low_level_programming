#include "main.h"
/**
 *_strstr - locates a character in a string
 *@haystack: pointer parameter
 *@needle: pointer parameter
 *Description: find substring
 *Return: pointer or null
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *start = haystack;
		char *end = needle;

		while (*end == *haystack && *end != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			end++;
		}
		if (*end == '\0')
			return (start);
		haystack = start + 1;
	}
	return (0);
}
