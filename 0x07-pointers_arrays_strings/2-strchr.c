#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: pointer vairable
 * @c: char vairable to be located
 * Return: pointer to the first occurance of c in a string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
