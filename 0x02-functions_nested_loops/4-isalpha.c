#include "main.h"
/**
 * _isalpha(int c) - returns 1 if is an alphabet, 0 if not
 * @c: char data type
 * Return: 1 if is an alphabet and 0 if is not an alphabet
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123 || c > 40 && c < 91)
		return (1);
	else
		return (0);
}
