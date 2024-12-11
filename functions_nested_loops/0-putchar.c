#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char str[] = "_putchar\n";

    write(1, str, sizeof(str) - 1);

    return (0);
}
i
