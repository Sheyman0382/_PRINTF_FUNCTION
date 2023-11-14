#ifndef MAIN_H
#define MAIN_H

typedef struct specifier
{
	char *fmrt_name;
	void (*fptr)(void);
}spec_t;

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

va_list sheyman;

int _printf(const char *format, ...);
int _strlen(const char *str);
int count_digit(int num);
void handle_char(void);
void handle_str(void);
void handle_int(void);
void handle_percent(void);

#endif /*MAIN_H*/
