#include "main.h"

/**
 * handle_octa - a function that converts an unsigned
 * integer to a an octa value
 *
 * Return: Nothing.
 */

void handle_octa(int *ptr, char *array)
{
	int num, j = *ptr, i = 0;
	char *str;

	num = va_arg(sheyman, unsigned int);
	str = num_to_octal(num);
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
	free(str);
}
