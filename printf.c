#include "main.h"
/**
 * _printf - prints everything
 * @format: is the string
 * Return: numbers of characters printed
 */
int _printf(const char *format, ...)
{
int len;
va_list ap;
if (format == NULL)
return (-1);
len = strlen(format);
if (len <= 0)
return (0);
va_start(ap, format);
len = handler(format, ap);
_putchar(-1);
va_end(ap);
return (len);
}
