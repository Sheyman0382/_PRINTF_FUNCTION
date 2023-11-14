#include "main.h"

/**
 * handle_char - a function that handle the format specifier '%c'
 *
 * Return: Nothing
 */

void handle_char(void)
{
	int char_var;

	char_var = va_arg(sheyman, int);
	write (1, &char_var, 1);
}
