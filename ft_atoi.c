/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:51:46 by chrmarti          #+#    #+#             */
/*   Updated: 2023/05/12 13:35:17 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int		i;
	int		nb;
	char	*str;

	str = (char *)nptr;
	nb = 0;
	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i = 1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	if (str[0] == '-')
		return (-nb);
	else
		return (nb);
	return (0);
}
