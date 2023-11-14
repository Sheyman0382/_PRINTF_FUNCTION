#include "main.h"

/**
 * count_digit - a function that counts the number(s) an integer has
 * @num: the integer to be counted.
 *
 * Return: an integer will be returned
 */

int count_digit(int num)
{
	int count = 0;

	while (num)
	{
		num = num / 10;
		count++;
	}
	return (count);
}
