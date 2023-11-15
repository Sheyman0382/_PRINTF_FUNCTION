#include "main.h"

void num_to_bin(int num)
{
	if (num > 1)
		num_to_bin(num >> 1);
	char b = ((num & 1) + '0');
	write(1, &b, 1);
}

/**
 * handle_binary - a function that handles %b and converts an integer
 * to binary.
 *
 * Return: Nothing
 */

void handle_binary(void)
{
	int num;

	num = va_arg(sheyman, int);
	num_to_bin(num);
}
