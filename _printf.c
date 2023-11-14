#include "main.h"

int _printf(const char *format, ...)
{
	va_start(sheyman, format);



	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
		}
		else 
		{
			format++;
			if (*format == '%')
			{
				char char_var = '%';
				write(1, &char_var, 1);
			}
			else if (*format == 'c')
				handle_char();
			else
			{
				if (*format == 's')
					handle_str();
			}
		}
		format++;
	}
	return (0);
}
int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
	_printf("Negative:[%c]\n", 'B');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Sheyman 100%%\n");

	return (0);
}
