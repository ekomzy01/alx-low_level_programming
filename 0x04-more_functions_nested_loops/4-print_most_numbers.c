#include "main.h"
/**
 * print_most_numbers - prints number from 0 to 9 except 2 and 4
 * @y: int data type
 */
void print_most_numbers(void)
{
	int n;

	for (y = 48; y < 58; y++)
	{
		if (y != 50 && y != 52)
			_putchar(y);
	}
	_putchar('\n');
}
