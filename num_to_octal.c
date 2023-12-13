#include "main.h"

char *num_to_octal(int num)
{
	int octalValue = 0, placeValue = 1, i = 0, count;
	char octa, *str;
	if (num < 0){
		perror("Please enter a non-negative decimal value.\n");
		exit(EXIT_FAILURE);
	}
	while (num > 0){
		octalValue += (num % 8) * placeValue;
		num /= 8;
		placeValue *= 10;
	}
	placeValue /= 10;

	count = count_digit(placeValue);
	str = malloc(count + 1);
	if (str ==  NULL)
		return (NULL);
	while (placeValue){
		octa = (octalValue / placeValue) + '0';
		str[i] = octa;
		i++;
		octalValue = octalValue % placeValue;
		placeValue /= 10;
	}
	str[i] = '\0';
	return(str);
}
