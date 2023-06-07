/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:54:06 by chrmarti          #+#    #+#             */
/*   Updated: 2023/05/23 09:49:42 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	char	cc;
	int		i;
	char	*s_cpy;

	i = 0;
	s_cpy = (char *)str;
	cc = (char)c;
	if (!str || !s_cpy)
		return (NULL);
	while (s_cpy[i])
	{
		if (s_cpy[i] == cc)
			return (&s_cpy[i]);
		i++;
	}
	if (cc == '\0')
		return (&s_cpy[i]);
	return (NULL);
}
