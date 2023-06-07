/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:50:23 by chrmarti          #+#    #+#             */
/*   Updated: 2023/05/12 14:01:49 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t			i;
	int				aux1;
	int				aux2;
	unsigned char	*ptr1_c;
	unsigned char	*ptr2_c;

	ptr1_c = (unsigned char *)ptr1;
	ptr2_c = (unsigned char *)ptr2;
	i = 0;
	if (num == 0)
		return (0);
	while (i < num - 1 && (ptr1_c[i] || ptr2_c[i]) && ptr1_c[i] == ptr2_c[i])
		i++;
	aux1 = ptr1_c[i];
	aux2 = ptr2_c[i];
	if (aux1 > aux2)
		return (1);
	else if (aux1 < aux2)
	{
		if (aux1 == -128)
			return (1);
		else
			return (-1);
	}
	return (0);
}
