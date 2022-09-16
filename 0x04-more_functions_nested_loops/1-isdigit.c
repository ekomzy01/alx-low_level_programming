#include "main.h"
/**
 * _isdigit - checks for digit between 0 and 9
 * @c: int data type
 * Return: 1 if is a digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
