/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:37:56 by chrmarti          #+#    #+#             */
/*   Updated: 2023/05/11 10:33:00 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int				check;
	unsigned char	i;

	i = c;
	check = 0;
	if (i >= 'A' && i <= 'Z')
		check = 1;
	else if (i >= 'a' && i <= 'z')
		check = 1;
	return (check);
}
