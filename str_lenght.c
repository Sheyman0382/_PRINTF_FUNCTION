#include "main.h"

/**
 * strlen - a function that counts the length of a string
 * @str: the string to be counted
 *
 * Return: the length of a string
 */

int _strlen(const char *str)
{
	unsigned int i;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	return (count);
}
