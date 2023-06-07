/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:47:11 by chrmarti          #+#    #+#             */
/*   Updated: 2023/05/26 13:45:40 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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
