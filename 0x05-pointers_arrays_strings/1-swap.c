#include <stdio.h>
/**
 * swap_int - swaps the values of two in
 * @a: memory location of type int
 * @b: ponter
 * @c: int vairable
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	a = *b;
	b = *a;
}