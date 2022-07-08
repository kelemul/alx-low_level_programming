#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * struct printer - printer structure
 * @symbol: data type
 * @print: data type printer
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

void intp(va_list arg);
void floatp(va_list arg);
void stringp(va_list arg);
void print_all(const char * const format, ...);

/**
 * charp - prints a character
 * @arg: arguments passed
 */
void charp(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * intp - prints an integer
 * @arg: is an argument passed
 */
void intp(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * floatp - prints a float num
 * @arg: is an argument passed to the func
 */
void floatp(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * stringp - prints a string
 * @arg: is an argumente passed to it
 */
void stringp(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints int, float, char and string
 * @format: describes argument format
 * @...: unknown list of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep = "";
	printer_t funcs[] = {
		{"c", charp},
		{"i", intp},
		{"f", floatp},
		{"s", stringp}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", sep);
			funcs[j].print(args);
			sep = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
