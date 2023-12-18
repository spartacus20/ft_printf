
# ft_printf

## Varidic functions

They are functions which take a variable number of arguments

va_start -->  enable access to varidic functions arguments
va_arg --> access the next argument.
va_copy --> maks a copy of the argument.
va_end --> ends access of the varidic functions.
va_list --> holds the information needed by va_start, va_arg, va_end and va_copy.

## COMPILATION
'cc -Wall -Wextra -Werror ft_printf.c -I ../include ../libftprintf.a'
