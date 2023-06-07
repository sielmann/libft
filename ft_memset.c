/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:41:36 by chrmarti          #+#    #+#             */
/*   Updated: 2023/05/10 14:21:30 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_copy;
	size_t			i;

	s_copy = s;
	i = 0;
	while (i < n)
	{
		s_copy[i] = c;
		i++;
	}
	return (s);
}
