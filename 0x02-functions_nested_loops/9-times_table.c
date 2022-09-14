#include "main.h"
/**
 * times_table - prints the 9 times table
 * @n: int data type
 * Return: n
 */
void times_table(void)
{
	int n = 0, m;

	while (n < 10)
	{
		m = 0;
		while (m < 10)
		{
			_putchar(n * m);
			m++;
		}
		_putchar('\n');
		n++;
	}
}
