#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct print_all - prints anything
 * @all: arguments
 * @func: pointer to the function that prints all
 */
typedef struct print_all
{
	char all;
	void (*func)(va_list arguments);
} simbol_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#endif
