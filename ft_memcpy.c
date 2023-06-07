/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:42:05 by chrmarti          #+#    #+#             */
/*   Updated: 2023/06/07 14:29:23 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d_cpy;
	char	*s_cpy;

	if (!dest && !src)
		return (NULL);
	d_cpy = (char *)dest;
	s_cpy = (char *)src;
	i = 0;
	while (i < n)
	{
		d_cpy[i] = s_cpy[i];
		i++;
	}
	//d_cpy[i] = '\0';
	return (dest);
}
