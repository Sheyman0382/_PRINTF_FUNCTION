#include "main.h"

void num_to_bin(int num, int *ptr, char *array)
{
	int i, j;
	if (num > 1)
	{
		i = num >> 1;
		num_to_bin(i, ptr, array);
	}
	char b = (num & 1) + '0';
	j = *ptr;
	array[j] = b;
	if (j == BUFFER - 2)
	{
		array[j + 1] = '\0';
		write(1, array, BUFFER);
		j = 0;
	}
	else
		j++;
	*ptr = j;
}

/**
 * handle_binary - a function that handles %b and converts an integer
 * to binary.
 *
 * Return: Nothing
 */

void handle_binary(int *ptr, char *array)
{
	int num;

	num = va_arg(sheyman, int);
	num_to_bin(num, ptr, array);
}
