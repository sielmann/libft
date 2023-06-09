/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:07:30 by chrmarti          #+#    #+#             */
/*   Updated: 2023/06/13 13:55:34 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_howmany2(char const *s, char c)
{
	int	is_char;
	int	count;

	is_char = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && !is_char)
		{
			count++;
			is_char = 1;
		}
		else if (*s == c)
			is_char = 0;
		s++;
	}
	return (count);
}

static void	*ft_free_split(char **arr, size_t i)
{
	if (arr == NULL)
		return (NULL);
	while (i > 0)
		free(arr[--i]);
	free(arr);
	return (NULL);
}

static char	*ft_find_word(char const *s, char c, size_t *start)
{
	size_t	end;
	char	*word;

	while (s[*start] == c)
		(*start)++;
	end = *start;
	while (s[end] && s[end] != c)
		end++;
	word = ft_substr(s, *start, end - *start);
	*start = end;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	size_strings;
	size_t	i;
	size_t	start;
	char	**arr;

	i = 0;
	start = 0;
	size_strings = ft_howmany2(s, c);
	arr = (char **)ft_calloc((size_strings + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	while (i < size_strings)
	{
		arr[i] = ft_find_word(s, c, &start);
		if (arr[i] == NULL)
			return (ft_free_split(arr, i));
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
