#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	_putchar('n');
	_putchar(' ');
	_putchar('=');
	_putchar(' ');
	_putchar(n + '0');
	_putchar('\n');

	reset_to_98(&n);

	_putchar('n');
	_putchar(' ');
	_putchar('=');
	_putchar(' ');
	_putchar(n + '0');
	_putchar('\n');

	return (0);
}

