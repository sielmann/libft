/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:14:05 by chrmarti          #+#    #+#             */
/*   Updated: 2023/06/08 13:22:02 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_howmany(long int nb)
{
	int	count;

	count = 0;
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

static	char	*ft_transform_itoa(char *str, long int n, int len, int i)
{
	long int	digit;

	digit = 0;
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		digit = n % 10;
		str[i] = '0' + digit;
		n /= 10;
		i--;
	}
	str[len] = '\0';
	return (str);
}

static	char	*ft_mem_alloc(char *str, int len, long int n)
{
	if (len == 0)
		len = 1;
	if (n < 0)
		len = len + 2;
	else
		len = len + 1;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	return (str);
}

static	char	*ft_zerocase(char *str)
{
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;

	str = NULL;
	n = (long int)n;
	len = ft_howmany(n);
	i = len - 1;
	str = ft_mem_alloc(str, len, n);
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str = ft_zerocase(str);
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		i++;
		len++;
	}
	str = ft_transform_itoa(str, n, len, i);
	return (str);
}
