#include "main.h"

int _printf(const char *format, ...)
{
	va_list sheyman;
	

	va_start(sheyman, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			format++;
		}
		format++;
		else
		{
			if (*format == 'c')
			{
				int char_var = va_arg(sheyman, int);
				write(i, char_var, strlen(char_var));
			}
			else
			{
				if (*format == 's')
				{
					const char *char_var = va_arg(sheyman, const char *);
					write(1, char_var, strlen(char_var));
				}
			}
			format++;
		}
	}
	return (0);
}
