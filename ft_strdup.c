/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:47:11 by chrmarti          #+#    #+#             */
/*   Updated: 2023/06/13 15:25:20 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*strd;

	strd = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!strd)
		return (NULL);
	ft_strlcpy(strd, s, ft_strlen(s) + 1);
	return (strd);
}
