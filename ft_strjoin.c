/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:07:04 by chrmarti          #+#    #+#             */
/*   Updated: 2023/05/23 11:21:27 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strlcat_mod(char *dst, const char *src, int size, int start)
{
	int	j;

	j = 0;
	while (j <= size)
	{
		dst[start] = src[j];
		start++;
		j++;
	}
	dst[start] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len1;
	int		len2;
	int		biglen;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	biglen = len1 + len2 + 1;
	str = (char *)malloc(sizeof(char) * biglen);
	if (!str)
		return (NULL);
	str = ft_strlcat_mod(str, s1, len1, 0);
	str = ft_strlcat_mod(str, s2, len2, len1);
	str[biglen] = '\0';
	return (str);
}
