/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:27:10 by aangelic          #+#    #+#             */
/*   Updated: 2023/04/12 15:34:17 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst1;
	char	*src1;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	dst1 = (char *)dst;
	src1 = (char *)src;
	if (dst1 == src1)
		return (dst1);
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}

// int main(void)
// {
// 	const char *str = "tatazinha";
// 	char dest[15] = "tata";

// 	ft_memcpy(dest,str,14);
// 	printf("%s\n",dest);
// 	return(0);
// }