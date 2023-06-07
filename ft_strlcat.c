/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:50:12 by chrmarti          #+#    #+#             */
/*   Updated: 2023/05/10 14:23:49 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/*
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10
*/
unsigned int	ft_sstrlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	dest_len = ft_sstrlen(dest);
	src_len = ft_sstrlen(src);
	if (size <= dest_len || size == 0)
		return (src_len + size);
	j = dest_len;
	while (src[i] && i < size - dest_len - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (src_len + dest_len);
}
