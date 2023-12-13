#include "main.h"

/**
 * handle_unsigned - a function that handles %u specifier and how
 * the integer is converted to a string
 *
 * Return: Nothing
 */

void handle_unsigned(int *ptr, char *array)
{
    int unsigned num, count, i, divider = 0;
    char *str;
    
    num = va_arg(sheyman, unsigned int);
    count = count_digit(num);

    for (i = 0; i < count; i++){
	    if (i == 0)
		    divider = 1;
	    else
		    divider = divider * 10;
    }

    i = *ptr;
    while (count){
        char character = (num / divider) + '0';
        array[i] = character;
	if (i == BUFFER - 2)
	{
		array[++i] = '\0';
		write(1, array, BUFFER);
		i = 0;
	}
	else
		i++;
        num = num % divider;
        divider = divider / 10;
        count--;
    }
    *ptr = i;
}
