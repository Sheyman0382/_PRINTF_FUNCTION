#include "main.h"

void handle_HEXA(int *ptr, char *array)
{
	int num, j = *ptr, i = 0, end;
	char *str, temp;
	num = va_arg(sheyman, unsigned int);
	str = num_to_HEXA(num);
	end = (_strlen(str) - 1);
	while (end >= 0)
	{
		array[j] = str[end];
		if (j == BUFFER - 2)
		{
			array[++j] = '\0';
			write(1, array, BUFFER);
			j = 0;
		}
		else
			j++;
		end--;
	}
	*ptr = j;
	free(str);
}
