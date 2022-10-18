#include <stdio.h>
/**
 * main - Write a program that prints the lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar("%c", i);

	putchar('\n');
	return (0);
}
