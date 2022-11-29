# ft_printf
trying to make it through 42

## Project: Recoding the printf() function from libc

The prototype of ft_printf() is: 
```c
int	ft_printf(const char *, ...);
```

## Requirements

* Don't implement the buffer management of the original printf().
* Your function has to handle the following conversions: cspdiuxX%
* Your function will be compared against the original printf()
* You must use the command **ar** to create your library. Using the **libtool** command is forbidden.
* Your **libftprint.a** has to be created at the root of your repository.

## Conversions
You have to implement the following conversions:
* %c Prints a single character
* %s Prints a string (as defined by the common C convention)
* %p The void * pointer argument has to be printed in hexadecimal format
* %d Prints a decimal (base 10) number
* %i Prinst  an integer in base 10
* %u Prints an unsigned decimal (base 10) number
* %x Prints a nmber in hexadecimal (base 16) lowercase format
* %X Prints a number in hexadecimal (base 16) uppercase format
* %% Prints a percent sign

## Program

Program name | libftprint.a
| :--- | :---
Turn in files  | Makefile, *.h, */*.h, *.c, */*.c
Makefile | NAME, all, clean, fclean, re
External functs. | malloc, free, wriet, va_start, va_arg, va_copy, va_end
Libft authorized | Yes
Description | Write a library that contains ft_printf(), a function that will mimic the original printf()

## Bonus part

* Manage any combination of the following flags: '-O.' and the field minimum under all conversions
* Manage all the following flags: '# +' (Yes, one of them is a space)

## License

[MIT](https://choosealicense.com/licenses/mit/)