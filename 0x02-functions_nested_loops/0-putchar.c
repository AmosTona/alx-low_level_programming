#include <stdio.h>
#include "main.h"

/**
 *  main - Entry point
 *
 *   Description: A program that prints _putchar and new line
 *
 *   Return: returns 0
 **/
int main(void)
{
	char c[8] = "putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
