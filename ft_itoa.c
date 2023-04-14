/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:21:37 by aangelic          #+#    #+#             */
/*   Updated: 2023/04/14 16:24:12 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*allocator(int size)
{
	char	*str;

	str = (char *)malloc (size + 1);
	if (!str)
		return (0);
	str[size] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long long	ln;

	ln = n;
	i = ft_count_digits(ln);
	str = allocator(i--);
	if (!str)
		return (0);
	if (ln == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (ln < 0)
	{
		str[0] = '-';
		ln *= -1;
	}
	while (ln > 0 && str[i] != '-')
	{
		str [i--] = (ln % 10) + 48;
		ln /= 10;
	}
	return (str);
}
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(987654321));
// 	printf("%s\n", ft_itoa(-123456789));
// }
