/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:20:01 by aangelic          #+#    #+#             */
/*   Updated: 2023/04/12 11:42:07 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;

	temp = (void *)malloc(count * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, size * count);
	return (temp);
}
