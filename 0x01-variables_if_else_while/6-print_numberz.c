#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */
int main(void)
{
	int numbr;

	for (numbr = 0; numbr < 10; numbr++)
		putchar((numbr % 10) + '0');
	putchar("\n");
	return (0);
}
