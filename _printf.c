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
		{
			array[buffer_count] = *format;
        		if (buffer_count == BUFFER - 2) 
			{
				buffer_count++;
				array[buffer_count] = '\0';
				write(1, array, buffer_count);
				buffer_count = 0;
			}
			else
				buffer_count++;
			format++;
		}
		else 
		{
			format++;
			i = 0;
			while (specifier[i].fmrt_name != NULL)
			{
				if (*format == *specifier[i].fmrt_name)
				{
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
int main(void)
{
	unsigned int num = 250;
	_printf("Let's try to printf a simple sentence.\n");
	_printf("binary 100%% test [%c] binary[%b] by myself[%s] plus 0ctal[%o] & hexa[%X]\n", 'b', 7, "sheyman",num, num);
	//_printf("My name is %s, i actually inted to be a %s sooner or later.\n", "oluwaseyi", "software enginner");
	//_printf("customized octal value [%o]\n", num);
	//printf("octal value for the inbuilt ptrf[%o]\n", num);
	//_printf("customized hexadecimal value [%X]\n", num);
	_printf("hexadecimal value [%x]\n", num);
	//_printf("customized binary value [%b]\n", num);
	//printf("customized binary value [%b]\n", num);
	return (0);
}
