#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);

		if (x == NULL)
			x = "(nil)";
		printf("%s", x);
		if (separator && (i < (n - 1)))
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
