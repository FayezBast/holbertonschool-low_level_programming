#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    int i = 0;
    int is_separator = 1;

    /* List of word separators */
    char separators[] = " \t\n,;.!?\"(){}";

    while (str[i] != '\0')
    {
        /* Check if the current character is a separator */
        if (strchr(separators, str[i]))
        {
            is_separator = 1; /* Set flag to capitalize next character */
        }
        else if (is_separator && str[i] >= 'a' && str[i] <= 'z')
        {
            /* Capitalize the character if it's lowercase */
            str[i] -= ('a' - 'A');
            is_separator = 0; /* Reset the flag */
        }
        else
        {
            is_separator = 0; /* Reset flag for non-separator */
        }
        i++;
    }

    return str;
}
