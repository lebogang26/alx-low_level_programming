#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	char az;
	/*print to lowercase*/
	putchar("\Lowercase alphabets: \n");
	for (az = 'a'; az <= 'z'; az++)
		{
			putchar("%c ", az);
		}
		/*print to uppercase*/
		putchar("Uppercase alphabets: \n");
		for (az = 'A'; az <= 'Z'; az++)
		{
			putchar("%c", az);
		}
		return (0);
}
