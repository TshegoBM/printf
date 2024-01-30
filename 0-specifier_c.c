#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int print_c(va_list *args)
{
	char character = va_arg(*args, int);
	write(1, &character, 1);
	return (1);

}

