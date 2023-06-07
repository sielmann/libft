/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:49:54 by chrmarti          #+#    #+#             */
/*   Updated: 2023/05/23 09:42:45 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	check;

	check = 0;
	i = ft_strlen(s);
	while (i >= 0 && check == 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
			check = 1;
		}
		i--;
	}
	return (NULL);
}
