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
		else
		{
			format++;
			if (*format == 'c')
			{
				int char_var = va_arg(sheyman, int);
				write(1, &char_var, 1);
				format++;
			}
			else
			{
				if (*format == 's')
				{
					const char *str_var = va_arg(sheyman, const char *);
					write(1, str_var, _strlen(str_var));
					format++;
				}
			}
		}
	}
	return (0);
}
int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
	_printf("Negative:[%c]\n", 'B');
	_printf("String:[%s]\n", "I am a string !");

	return (0);
}
