/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 06:05:45 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/13 06:05:48 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	ft_val(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int	ft_putunsigned(unsigned int n)
{
	char	str[13];
	int		length;
	int		count;

	ft_bzero(str, 13);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + ft_val(n % 10);
		n = (n / 10);
	}
	if (length > 0)
		length--;
	count = length;
	while (length >= 0)
		write(1, &str[length--], 1);
	return (count);
}
