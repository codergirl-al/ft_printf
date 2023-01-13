


#include "../../includes/libft.h"

static int	ft_val(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int	ft_putnbr(int n)
{
	char	str[13];
	int		is_neg;
	int		length;
	int		count;

	is_neg = (n < 0);
	ft_bzero(str, 13);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + ft_val(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[length] = '-';
	else if (length > 0)
		length--;
	count = length;
	while (length >= 0)
		write(1, &str[length--], 1);
	return (count);
}
