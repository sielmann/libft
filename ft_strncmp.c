/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:34:12 by chrmarti          #+#    #+#             */
/*   Updated: 2023/05/12 13:58:18 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		aux1;
	int		aux2;
	int		check;

	i = 0;
	check = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && (s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	aux1 = s1[i];
	aux2 = s2[i];
	if (aux1 > aux2)
		check = 1;
	else if (aux1 < aux2)
	{
		if (aux1 == -128)
			check = 1;
		else
			check = -1;
	}
	return (check);
}
/*
int main() {
   char str1[] = "test\200";
   char str2[] = "test\0";
   int result;

   result = ft_strncmp(str1, str2, 6);
   if (result == 0) {
      printf("0.\n");
   } else {
	 printf("%d\n", result);

   }
   return 0;
}
*/
