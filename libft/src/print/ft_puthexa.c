/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:28:41 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/12 15:41:45 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"


static int	ft_decimal_to_hexa(unsigned long long int n, int base, int len)
{
	unsigned long long int temp;
	int remainders[16];
	int i;
	int count;

	i = 0;
	count = 0;
	while (n != 0)
	{
		temp = n;
		n /= 16;
		remainders[i] = temp - (n * 16) + 48;
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (remainders[i] > 57)
			ft_putchar(remainders[i] - 9 + base);
		else
			ft_putchar(remainders[i]);
		count++;
		i--;
	}
	return count;
}

int	ft_puthexa(unsigned long long int n, char format)
{
	int				len;
	unsigned int	base_len;

	len = 0;
	if (format == 'p')
	{
		write(1, "0x", 2);
		len += 2;
	}
	if (format == 'X')
		len += ft_decimal_to_hexa(n, 16, len);
	else
		len += ft_decimal_to_hexa(n, 48, len);
	return (len);
}
