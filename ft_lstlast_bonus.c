/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:19:31 by chrmarti          #+#    #+#             */
/*   Updated: 2023/06/07 14:07:05 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	else if (!lst->next)
		return (lst);
	while (lst)
	{
	  if (lst->next == NULL)
		return (lst);
	  lst = lst->next;
	}
	return (lst);
}
