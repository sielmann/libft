/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:07:38 by chrmarti          #+#    #+#             */
/*   Updated: 2023/06/08 15:03:30 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int	ft_theend(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	end;

	j = 0;
	end = 0;
	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (!set[j])
			break ;
		i--;
	}
	end = i;
	if (i < 0)
		return (0);
	return (end);
}

int	ft_thestart(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (!set[j])
			break ;
		i++;
	}
	start = i;
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		start;
	int		end;
	int		len;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (ft_strdup(""));
	start = ft_thestart(s1, set);
	end = ft_theend(s1, set);
	if (start > end)
		len = 0;
	len = end - start + 1;
	new_str = ft_substr(s1, start, len);
	if (!new_str)
		return (0);
	return (new_str);
}
