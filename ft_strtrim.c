/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:32:41 by aangelic          #+#    #+#             */
/*   Updated: 2023/04/13 14:45:13 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;
	size_t	i;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] != 0 && ft_strchr(set, s1[i]))
		i++;
	start = i;
	i = ft_strlen(s1);
	while (i > start && ft_strchr(set, s1[i - 1]))
		i--;
	end = i;
	return (str);
}

int main()
{
	printf("%s\n",ft_strtrim("abqbc","abc"));
	printf("%s\n",ft_strtrim("xavocadoyz","xyz"));

}