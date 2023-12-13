#include "main.h"

/**
 * handle_str - a function that hadles "%s" format specifier
 *
 * Return: Nothing
 */

void handle_str(int *ptr, char *array)
{
	char *str;
	int i = 0, j = *ptr;

	str = va_arg(sheyman, char *);
	while (str[i] != '\0')
	{
		array[j] = str[i];
		if (j == BUFFER - 2)
		{
			array[++j] = '\0';
			write(1, array, BUFFER);
			j = 0;
		}
		else
			j++;
		i++;
	}
	*ptr = j;
}
