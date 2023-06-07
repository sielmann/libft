/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:14:05 by chrmarti          #+#    #+#             */
/*   Updated: 2023/05/31 09:52:55 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_howmany(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			i;
	int			len;
	int			digit;
	char		*str;

	nb = (long int)n;
	digit = 0;
	len = ft_howmany(n);
	i = len - 1;
	if (len == 0)
		len = 1;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		free(str);
		str = malloc(sizeof(char) * (len + 2));
		if (!str)
			return (NULL);
		str[0] = '-';
		nb = -nb;
		i++;
		len++;
	}
	else if (nb == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	while (nb != 0)
	{
		digit = nb % 10;
		str[i] = '0' + digit;
		nb /= 10;
		i--;
	}
	str[len] = '\0';
	return (str);
}
