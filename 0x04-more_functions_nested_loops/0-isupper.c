#include "main.h"

/**
 * _isupper - checks for a digit (0 through 9)
 * @c: int to be checked
 *Return: 1 if c is a digit, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
