#include "main.h"

/**
 * handle_integer - a function that handles %d specifier and how
 * the integer is converted to a string
 *
 * Return: Nothing
 */

void handle_int(void)
{
    int num, count = 0, i = 0, divider = 0;
    char *str;
    
    num = va_arg(sheyman, int);
    count = count_digit(num);

    for (; i < count; i++){
	    if (i == 0)
		    divider = 1;
	    else
		    divider = divider * 10;
    }
    str = malloc(count + 1);
    if (str == NULL)
        exit(EXIT_FAILURE);

    i = 0;
    while (count){
        char character = (num / divider) + '0';
        str[i] = character;
        num = num % divider;
        divider = divider / 10;
        i++;
        count--;
    }
    str[i] = '\0';
    write(1, str, _strlen(str));
    free(str);
}
