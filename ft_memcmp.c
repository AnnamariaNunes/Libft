/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:27:03 by aangelic          #+#    #+#             */
/*   Updated: 2023/04/12 12:35:24 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*first_word;
	unsigned char	*second_word;
	size_t			i;

	first_word = (unsigned char *)s1;
	second_word = (unsigned char *)s2;
	i = 0;
	while (n > i)
	{
		if (first_word[i] != second_word[i])
			return (first_word[i] - second_word[i]);
		i++;
	}
	return (0);
}
