/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:48:13 by apeposhi          #+#    #+#             */
/*   Updated: 2022/12/01 15:13:06 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
	va_list v_list;

	va_start(v_list,str);
	while()
	{
		if ( %)
			uses va_arg
		else 
			write
	}
	va_end(v_list);
	return(0);
}



#include <stdio.h>
int main()
{
	char *ptr = NULL;
	printf("\nlenght >  %i \n", printf("abc%i %s", 42 , "Hello"));	
}