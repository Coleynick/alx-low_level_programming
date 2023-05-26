#include <stdarg.h>
#include <stdio.h>

/**
* print_all - Prints anything based on the format provided.
* @format: List of types of arguments passed to the function.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char current_format;
va_start(args, format);
while (format && format[i])
{
current_format = format[i];
switch (current_format)
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
i++;
continue;
}
if (format[i + 1])
printf(", ");
i++;
}
printf("\n");
va_end(args);
}
