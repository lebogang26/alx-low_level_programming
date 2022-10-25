#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: 1st int
* @b: 2nd int
*
*/
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
