/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:50:23 by chrmarti          #+#    #+#             */
/*   Updated: 2023/06/13 13:52:58 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t			i;
	unsigned char	*ptr1_c;
	unsigned char	*ptr2_c;

	i = 0;
	ptr1_c = (unsigned char *)ptr1;
	ptr2_c = (unsigned char *)ptr2;
	while (i < num)
	{
		if (ptr1_c[i] != ptr2_c[i])
			return (ptr1_c[i] - ptr2_c[i]);
		i++;
	}
	return (0);
}
