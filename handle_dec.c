#include "main.h"

/**
 * handle_dec - a function that handles %d specifier and how
 * the integer is converted to a string
 *
 * Return: Nothing
 */

void handle_dec(int *ptr, char *array)
{
    int num, temp, count = 0, i = 0, divider = 0;
    char *str;
    
    num = va_arg(sheyman, int);
    if (num < 0)
    {
	    num = num * -1;
	    count = count_digit(num);
	    temp = *ptr;
	    array[temp] = '-';
	    if (temp == BUFFER - 2)
	    {
		    array[++temp] = '\0';
		    write(1, array, BUFFER);
		    temp = 0;
	    }
	    *ptr = temp;
    }
    else
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
