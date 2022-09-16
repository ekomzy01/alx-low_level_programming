#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9 on new lines
 * @n: int data type
 * Return: 0
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
