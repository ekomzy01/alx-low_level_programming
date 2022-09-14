#include "main.h"
/**
 * print_sign - print + if n > 0, 0 if n = 0 and - if n < 0
 * @n: int data type
 * Return: 1 if n > 0, 0 if n = 0 and - if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
