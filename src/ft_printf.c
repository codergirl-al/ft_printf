/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:48:13 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 13:27:28 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list v_list;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(v_list,str);
	// while(str[i])
	// {
	// 	if (str[i] = '%' && ft_strnstr("cspdiuxX%", str[i+1]))
			
	// 	else 
	// 		write
	// }
	va_end(v_list);
	return(0);
}
