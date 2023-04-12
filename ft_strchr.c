/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:29:59 by aangelic          #+#    #+#             */
/*   Updated: 2023/04/12 15:58:09 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && (const unsigned char)*s != (const unsigned char)c)
		s++;
	if ((const unsigned char)*s == (const unsigned char)c)
		return (s);
	return (NULL);
}
