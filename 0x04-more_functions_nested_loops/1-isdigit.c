#include "main.h"

/**
* _isdigit - checks for a digit (0 through 9)
* @c: char to check
*
* Return: 1 if c is digit, otherwise 0
*/
int _isdigit(int c)
{
	int i = 0;

	if (c >= '0' && c <= '9')
		i = 1;
	return (i);
}
