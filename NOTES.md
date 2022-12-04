## Printf notes

#### What does printf do
Printf sends a formatted string to the string to the standard output (the display). This string can display formatted variables and special control characters, such as new lines ('\n'), backspaces ('\b') and tabspaces ('\t').

## va_arg()

The C library macro **type va_arg(va_list ap, type)** retrieves the next argument in the parameter list of the function with **type**. This does not determine whether the retrieved argument is the last argument passed to the function.


## A more practical explanation:

#### Declaration

```c
#include <stdarg.h>

type    va_arg(va_list ap, type);
```

#### Parameters

**ap** -> This is the object of type va_list with information about the additional arguments and their retrieval state. This object should be initialized by an initial call to **va_start** before the first call to **va_arg**.

**type** -> This is a type name. This type name is used as the type of the expression, this macro expands to.

#### Return value

This macro returns thenext additional argument as an expression of type **type**.

Example (from documentation):

```C
#include <stdarg.h>
#include <stdio.h>

int sum(int, ...);

int main() {
    printf("Sum of 15 and 56 = %d\n", sum(2, 15, 16));
    return (0);
}

int sum(int num_args, ...)
{
    int val = 0;
    va_list ap;
    int i;

    va_start(ap, num_args);
    for(i = 0; i < num_args; i++)
        val += va_arg(ap, int);
    va_end(ap);

    return (val);
}
```