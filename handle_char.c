#include "main.h"

/**
 * handle_char - a function that handle the format specifier '%c'
 *
 * Return: Nothing
 */

void handle_char(int *ptr, char *array)
{
	char char_var;
	int j = *ptr;

	char_var = va_arg(sheyman, int);
	array[j] = char_var;
	if (j == BUFFER - 2)
	{
		array[++j] = '\0';
		write(1, array, BUFFER);
		j = 0;
	}
	else
		j++;
	*ptr = j;
}
