#include "main.h"

/**
 * handle_str - a function that hadles "%s" format specifier
 *
 * Return: Nothing
 */

void handle_str(void)
{
	char *str;

	str = va_arg(sheyman, char *);
	write(1, str, _strlen(str));
}
