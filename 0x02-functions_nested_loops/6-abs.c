#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * @n: int data type
 * Return: always 0
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
