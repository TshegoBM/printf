#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * struct conv_spec - structure to store the function for each specifier
  * @spec: specifying character
  * @f: pointer to function that processes recieved specifier
  */
typedef struct conv_spec
{
	const char spec;
	int (*f)(va_list *arg);
} con_t;

int (*spec_f(const char c))(va_list *arg);
int print_int(va_list *arg);

int _printf(const char *format, ...);

#endif /* MAIN_H */
