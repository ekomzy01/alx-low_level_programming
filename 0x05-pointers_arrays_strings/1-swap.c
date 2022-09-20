#include <stdio.h>
/**
 * swap_int - swaps the values of two int
 * @a: memory location of type int
 * @b: ponter
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int num = *a;

	*a = *b;
	*b = num;
}
