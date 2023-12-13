#include "main.h"

/**
 * _strlen - a function that counts the length of a string
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

/**
 * _str_rev - a function that reverses a string
 * @str: the string to be converted
 *
 * Return: a pointer to a reversed string
 */

/*char *_str_rev(char *str)
{
	int i, count;

	count = _strlen(str);
	if (count = 1)
		return (str);
	else if (count = 2)
	{
		char temp = str[0];
		str[0] = str[1];
		str[1] = temp;
		str[2] = '\0';
	}
	else
	{
		i = 0;
		for (; i < (count / 2); i++)
		{
			char temp = str[i];
			str[i] = str[count -1 -i];
			str[count -1 -i] = temp;
		}
		str[i] = '\0';
	}
	//printf("%s", str);
	return (str);
}*/
