/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:07:09 by chrmarti          #+#    #+#             */
/*   Updated: 2023/06/08 11:45:49 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	size;

	substr = NULL;
	s_len = ft_strlen(s);
	if (len < s_len - start)
		size = len + 1;
	else
		size = s_len - start + 1;
	if (start >= s_len)
		return (ft_strdup(""));
	substr = (char *)ft_calloc(size, sizeof(char));
	if (!substr)
		return (0);
	ft_strlcpy(substr, s + start, size);
	return (substr);
}
