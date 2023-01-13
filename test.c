#include <stdio.h>
#include "./ft_printf.h"

int main()
{
	int alba = 68644346;
	void *ptr;
	ptr = &alba;
	
	printf("Integer value is: %d\n", alba);
	ft_printf("Pointer value is: %p\n", ptr);
	printf("Pointer value is: %p\n", ptr);
	ft_printf("UPPERCASE value is: %X\n", alba);
	ft_printf("LOWERCASE value is: %x\n", alba);
	ft_printf("UPPERCASE value is: %X\n", alba);
	ft_printf("LOWERCASE value is: %x\n", alba);
	ft_printf("Decimal number is: %d\n", 12);
	printf("Print decimal number is: %d\n", 12);
	ft_printf("Integer value is: %i\n", alba);
	ft_printf("Unsigned number is: %u\n", 457358922);
	printf("Print unsigned number is: %u\n", 457358922);
	return (0);
}