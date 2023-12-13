#include "main.h"

int _printf(const char *format, ...)
{
	va_start(sheyman, format);
	int i = 0, buffer_count = 0;
	char array[BUFFER];

	spec_t specifier[] = {
		{"c", handle_char}, {"u", handle_unsigned},
		{"s", handle_str}, {"o", handle_octa},
		{"%", handle_percent}, {"x", handle_hexadecimal},
		{"d", handle_dec}, {"i", handle_int},
		{"b", handle_binary}, {"X", handle_HEXA},
		{NULL, NULL}
	};

	while (*format != '\0')
	{
		if (*format != '%')
			format = str_with_no_specifier(array, &buffer_count, format);	
		else {
			format++;
			i = 0;
			while (specifier[i].fmrt_name != NULL){
				if (*format == *specifier[i].fmrt_name){
					specifier[i].fptr(&buffer_count, array);
					break;
				}
				i++;
			}
			format++;
		}
	}
	if (buffer_count > 0)
	{
		array[buffer_count] = '\0';
		write(1, array, buffer_count);
		va_end(sheyman);
	}
	return (buffer_count);
}
