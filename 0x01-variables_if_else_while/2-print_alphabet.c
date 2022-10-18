#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: o
 */
int main(void)
{
	char ch = 'a';
	/*using a while loop*/
	while (ch <= 'z')
	{
		putchar("%c", ch);
		ch++;
		putchar("\n");
	}
	return (0);
}
