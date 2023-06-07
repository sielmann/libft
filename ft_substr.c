/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:07:09 by chrmarti          #+#    #+#             */
/*   Updated: 2023/06/07 18:17:03 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	j;

	j = 0;
	substr = NULL;
	if (!s || (!(substr = malloc(sizeof(char) * (len + 1)))))
				 return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	//	substr = malloc(sizeof(char) * (len + 1));
	//if (!substr)
	//	return (NULL);
	while (j < len)
	{
		substr[j] = s[start];
		j++;
		start++;
	}
	substr[j] = '\0';
	return (substr);
}
