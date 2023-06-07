/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:07:09 by chrmarti          #+#    #+#             */
/*   Updated: 2023/06/07 10:50:00 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	j;

	j = 0;
	if (!s)
		return (ft_strdup(""));
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	substring = malloc(sizeof(char) * len + 1);
	if (!substring || !s)
		return (NULL);
	while (j < len)
	{
		substring[j] = s[start];
		j++;
		start++;
	}
	substring[j] = '\0';
	return (substring);
}
