#include "main.h"

/**
 * handle_percent - a function that handles the % char
 *
 * Return: Nothing
 */

void handle_percent(void)
{
	char percent;

	percent = '%';
	write(1, &percent, 1);
}
