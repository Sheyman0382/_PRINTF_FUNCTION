#include "main.h"

/**
 * handle_percent - a function that handles the % char
 *
 * Return: Nothing
 */

void handle_percent(int *ptr, char *array)
{
	array[*ptr] = '%';
	if (*ptr == BUFFER - 1)
	{
		array[BUFFER] = '\0';
		write(1, array, BUFFER);
		*ptr = 0;
	}
	++*ptr;
}
