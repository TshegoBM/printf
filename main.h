#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
extern int errno;
/**
  * struct conv_spec - structure to store the function for each specifier
  * @spec: specifying character
  * @f: pointer to function that processes recieved specifier
  */
typedef struct conv_spec
{
	const char spec;
	int (*f)(va_list *);
} con_t;

int (*spec_f(const char c))(va_list *);
int print_int(va_list *);

void *alloc_int(int n, int *count);
int value_errcheck(va_list *arg, int *n);

int _printf(const char *format, ...);

#endif /* MAIN_H */
