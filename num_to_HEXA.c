#include "main.h"

char *num_to_HEXA(int num)
{
	int place_value = 1, hexa_value, i = 0;
	char *str, char_check = 'A';

	str = malloc(2);
	if (str == NULL)
		return (NULL);
	while (num)
	{
		hexa_value = (num % 16);
		if (hexa_value >= 10 && hexa_value <= 15)
			str[i] = char_check + (hexa_value - 10);
		else
			str[i] = hexa_value + '0';
		i++;
		num = num / 16;
		if (num != 0)
		{
			str = realloc(str, i + 2);
			if (str == NULL)
				return (NULL);
		}
	}
	str[i] = '\0';

	return (str);
}
