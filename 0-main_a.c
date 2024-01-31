#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int print_p(va_list *args);
int print_c(va_list *args);
int print_s(va_list *args);

int main()
{
        printf("Testing _printf with %%p:\n");
        _printf("This is a test: %%p\n");


        char character = 'T';
        printf("\nTesting _print with %%c:\n");
        _printf("This is a test: %c\n", character);

        char *message = "Hello, Tshego!";
        printf("\nTesting _printf with %%s:\n");
        _printf("Message: %s\n", message);

        return (0);
}
