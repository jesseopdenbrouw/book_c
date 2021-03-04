//
// simple_printf
//    A simple printf function with variable argument list
//
// Based on https://en.cppreference.com/w/c/variadic
//
// It prints simple integers, characters and doubles
// with %d, %c and %f. %% is printed as %. All other
// characters are printed as the character itself.


#include <stdio.h>
#include <stdarg.h>

// Print integer decimal
void printdec(int);

void simple_printf(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);

    while (*fmt != '\0') {
        if (*fmt == '%') {
            ++fmt;
            if (*fmt == '%') {
                // It's a %, print it
                putchar('%');
            } 
            else if (*fmt == 'd') {
                // It's a integer
                int i = va_arg(args, int);
                if (i < 0)
                {
                    i = -i;
                    putchar('-');
                }
                printdec(i);
            }
            else if (*fmt == 'c') {
                // A 'char' variable will be promoted to 'int'
                // A character literal in C is already 'int' by itself
                int c = va_arg(args, int);
                putchar(c);
            }
            else if (*fmt == 'f') {
                // It's a double, even if float, because C will
                // promote it to a double
                double d = va_arg(args, double);
                // Okay, this is much simpler than making an own function
                printf("%.20f", d);
            }
            else {
                // Unknown specifier, skip this, but it will produce havoc
                putchar('?');
            }
        }
        else {
            putchar(*fmt);
        }
        ++fmt;
    }

    va_end(args);
}

int main(void)
{
    simple_printf("%d\n%c\n%f\n%f\n", -1234, 'a', 1.9f, 1.1);
}

// Simple version of printing a decimal value
void printdec(int d)
{
    if (d / 10 > 0)
    {
        printdec(d / 10);
    }
    putchar(d % 10 + '0');
}
