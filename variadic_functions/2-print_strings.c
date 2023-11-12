#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


void print_all(const char * const format, ...) {
	va_list args;
	const char *ptr = format;
	int i;
	char *s;

	va_start(args, format);

	while (*ptr) {
		if (*ptr == 'c') {
			i = va_arg(args, int);
			printf("%c", i);
		} else if (*ptr == 'i') {
			i = va_arg(args, int);
			printf("%d", i);
		} else if (*ptr == 'f') {
			double f = va_arg(args, double);
			printf("%f", f);
		} else if (*ptr == 's') {
			s = va_arg(args, char*);
			if (s == NULL) {
				printf("(nil)");
			} else {
				printf("%s", s);
			}
		}

		ptr++;

		if (*ptr)
			printf(", ");
	}

	printf("\n");

	va_end(args);
}
