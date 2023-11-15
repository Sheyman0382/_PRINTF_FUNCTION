#include "main.h"

int _printf(const char *format, ...)
{
	va_start(sheyman, format);
	int i = 0;
	spec_t specifier[] = {
		{"c", handle_char},
		{"s", handle_str},
		{"%", handle_percent},
		{"d", handle_int},
		{"b", handle_binary},
		{NULL, NULL}
	};

	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
		}
		else 
		{
			format++;
			while (specifier[i].fmrt_name != NULL)
			{
				if (*format == *specifier[i].fmrt_name)
				{
					specifier[i].fptr();
					break;
				}
				i++;
			}
		}
		format++;
	}
	return (0);
}
int main(void)
{
	int num = 250;
	_printf("Let's try to printf a simple sentence.\n");
	_printf("Negative:[%c]\n", 'B');
	_printf("String and integer:[%s] [%d]\n", "I am a string !", num);
	_printf("Sheyman 100%%\n");
	_printf("binary test [%b]\n", num);

	return (0);
}
