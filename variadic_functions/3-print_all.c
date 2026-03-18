#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - prints anything followed by a new line
* @format: list of types of arguments passed to the function
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	unsigned int i;
	char *separator = "";
	char *str;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
	switch (format[i])
	{
		case 'c':
			printf("%s", separator);
			printf("%c", va_arg(ap, int));
			separator = ", ";
			break;
		case 'i':
			printf("%s", separator);
			printf("%d", va_arg(ap, int));
			separator = ", ";
			break;
		case 'f':
			printf("%s", separator);
			printf("%f", va_arg(ap, double));
			separator = ", ";
			break;
		case 's':
			str = va_arg(ap, char*);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
			separator = ", ";
			break;
	}
	i++;
	}
	printf("\n");
	va_end(ap);
}
