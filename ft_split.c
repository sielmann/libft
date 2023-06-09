/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:07:30 by chrmarti          #+#    #+#             */
/*   Updated: 2023/06/09 11:49:13 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_howmany2(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

void	ft_free_split(char **arr)
{
	int	i;

	i = 0;
	if (arr == NULL)
		return ;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char *find_word(char **arr, char *str)
{
  int count;
  int j;

  j = 0;
  count = 0;
  while (str[i])
  {
	count = 0;
  	while (str[i] == ' ')
	 	i++;
   	while (str[i] != ' ')
	{
		count++:
		i++;
    }
	arr[j] = malloc(sizeof(char) * (count + 1));
	j++;
	i++;
   	}	
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		z;
	int		k;
	int		size_strings;
	char	**arr;
	int		len;

	i = 0;
	j = 0;
	z = 0;
	k = 0;
	len = (int)ft_strlen(s);
	size_strings = ft_howmany2(s, c);
	arr = malloc((size_strings + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
   	while (i < size_strings)
	{
		arr[i] = malloc(sizeof(char) * (len + 1));
		if (!arr[i])
		{
			while (k < i)
			{
				free(arr[k]);
				k++;
			}
			free(arr);
		}
		i++;
		}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			arr[j][z] = '\0';
			j++;
			z = 0;
		}
		else
		{
			arr[j][z] = s[i];
			z++;
		}
		i++;
	}
	arr[j][z] = '\0';
	arr[size_strings] = NULL;
	return (arr);
}
/*
int main(void)
{
  char *s = "hola como estas";
  char c = 'a';

  char **arr = ft_split(s, c);
  if (!arr)
     {
        int i = 0;
        while (arr[i] != NULL)
        {
            printf("%s\n", arr[i]);
            i++;
        }

       ft_free_split(arr);
    }
  return (0);
}

*/
