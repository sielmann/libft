/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:51:51 by chrmarti          #+#    #+#             */
/*   Updated: 2023/06/07 10:42:41 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	size_t	big_len;
	size_t	lit_len;

	i = 0;
	big_len = ft_strlen(big);
	lit_len = ft_strlen(little);
	if (!big || !little || lit_len > len)
		return (NULL);
	else if (lit_len == 0)
		return ((char *)big);
	while (i < (int)len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < (int)len)
		{
			if (big[i + j] == little[j] && little[j + 1] == '\0')
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
