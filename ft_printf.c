/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:48:13 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/12 16:04:19 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

static int	ft_case(va_list v_list, const char c)
{
	unsigned long	ptr;

	if (c == 'c')
		return (ft_putchar(va_arg(v_list, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(v_list, char *)));
	else if (c == 'p')
	{
		ptr = va_arg(v_list, unsigned long);
		if (ptr)
			return (ft_puthexa(ptr, c));
		return (ft_putstr("(nil"));
	}
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(v_list, int), ));
	// else if (c == 'u')
	// 	return (ft_putunbr_base(va_arg(v_list, unsigned int), "0123456789"));
	else if (c == 'x' || c == 'X')
		return (ft_puthexa(va_arg(v_list, unsigned int), c));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list v_list;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(v_list, str);
	while(str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]) != 0)
		{
			count += ft_case(v_list, str[i + 1]);
			i++;
		}
		else 
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(v_list);
	return(0);
}
