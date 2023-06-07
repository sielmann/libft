/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:34:12 by chrmarti          #+#    #+#             */
/*   Updated: 2023/06/07 17:33:30 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	i = 0;
	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n && aux1[i] && aux2[i] && aux1[i] == aux2[i])
		i++;
	if (i == n)
		i--;
	return (aux1[i] - aux2[i]);
}
