#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *name;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		name = va_arg(ap, char*);
        if (name == NULL)
            printf("(nil)");
        else
            printf("%s", name);
        if (i != n - 1 && separator != NULL)
            printf("%s", separator);
	}
	printf("\n");
	va_end(ap);

}
