#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 (*
  * Return: 0 on succes
  */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
