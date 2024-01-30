#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int print_p(va_list *args)
{
    
	char percent = '%';

	write(1, &percent, 1);
}
