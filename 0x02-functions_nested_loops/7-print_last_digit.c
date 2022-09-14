#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: int data type
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = -1 * (n % 10);
		_putchar(l + '0');
		return (l);
	}
	else
	{
		l = (n % 10);
		_putchar(l + '0');
		return (l);
	}
}
