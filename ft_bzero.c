/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:41:49 by chrmarti          #+#    #+#             */
/*   Updated: 2023/05/12 15:54:03 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_copy;
	unsigned int	i;

	s_copy = s;
	i = 0;
	while (i < n)
	{
		s_copy[i] = 0;
		i++;
	}
}
