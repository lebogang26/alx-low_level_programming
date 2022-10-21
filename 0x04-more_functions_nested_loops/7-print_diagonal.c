#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: the number of '_' to be printed
*/
void print_diagonal(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
	_putchar('_');
	}
	_putchar('\n');
}

