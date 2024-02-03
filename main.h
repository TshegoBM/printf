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
int print_uint(va_list *arg);
int print_octal(va_list *arg);
int print_upperhex(va_list *arg);
int print_lowerhex(va_list *arg);
int print_s_con(va_list *arg);

void *alloc_base(long n, int *count, int base);
void *alloc_int(int n, int *count);

int _printf(const char *format, ...);
int _putchar(char);
int print_c(va_list *arg);
int print_s(va_list *arg);
int print_p(va_list *arg);
int print_b(va_list *arg);
int print_pointer(va_list *arg);
void write_buffer(const char *buffer, size_t size);

#endif /* MAIN_H */
