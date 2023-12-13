#include "main.h"

const char *str_with_no_specifier(char *array, int *ptr, const char *charac)
{
	int j = *ptr;
	array[j] = *charac;
	if (j == BUFFER - 2)
	{
		j++;
		array[BUFFER] = '\0';
		write(1, array, BUFFER);
		j = 0;
	}
	else
		j++;
	charac++;
	*ptr = j;
	return (charac);
}
