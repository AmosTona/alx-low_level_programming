#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character that is checked
 * Return: if uppercase return 1 otherwise return 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
