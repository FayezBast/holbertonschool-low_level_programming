#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints "_putchar" followed by a new line to stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";

	write(1, str, sizeof(str) - 1);
	return (0);
}
