/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:29:47 by aangelic          #+#    #+#             */
/*   Updated: 2023/04/12 11:49:23 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(char c, char *s)
{
	int	len;

	len = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s != c && *s)
				s++;
			len++;
		}
	}
	return (len);
}

static char	*new_word(const char *s, int start, int end, int len)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * len + 1);
	if (!new)
		new = (char *)malloc(sizeof(char) * len + 1);
	while (start < end)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		end;
	int		index_split;

	split = (char **)malloc(sizeof(char *) * (get_length(c, (char *)s) + 1));
	if (!split || !s)
		return (0);
	i = 0;
	index_split = 0;
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
		{
			end = i;
			while (s[end] && s[end] != c)
				end++;
			split[index_split++] = new_word(s, i, end, end - i);
			i = end;
		}
		else
			i++;
	}
	split[index_split] = 0;
	return (split);
}
