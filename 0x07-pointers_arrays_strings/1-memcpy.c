#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: char pointer vairable
 * @src: char pointer vairable
 * @n: unsigned int
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *result;

	result = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (result);
}
