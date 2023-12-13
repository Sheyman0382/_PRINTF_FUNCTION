#ifndef MAIN_H
#define MAIN_H

#define BUFFER 5

typedef struct specifier
{
	char *fmrt_name;
	void (*fptr)(int *, char *);
}spec_t;

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

va_list sheyman;

int _printf(const char *format, ...);
int _strlen(const char *str);
int count_digit(int num);
void handle_char(int *ptr, char *array);
void handle_str(int *ptr, char *array);
void handle_int(int *ptr, char *array);
void handle_dec(int *ptr, char *array);
void handle_percent(int *ptr, char *array);
void handle_binary(int *ptr, char *array);
void handle_unsigned(int *ptr, char *array);
void handle_octa(int *ptr, char *array);
void handle_hexadecimal(int *ptr, char *array);
char *str_rev(char *str);
char *num_to_octal(int num);
char *num_to_hexa(int num);
void handle_HEXA(int *ptr, char *array);
char *num_to_HEXA(int num);
const char *str_with_no_specifier(char *array, int *ptr, const char *charac);

#endif /*MAIN_H*/
