/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:39:17 by chrmarti          #+#    #+#             */
/*   Updated: 2023/05/03 15:28:36 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	unsigned char	anum;

	anum = c;
	if ((anum >= 'A' && anum <= 'Z') || (anum >= 'a' && anum <= 'z'))
		return (1);
	else if (anum >= '0' && anum <= '9')
		return (1);
	else
		return (0);
}
