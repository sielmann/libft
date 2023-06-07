/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrmarti <chrmarti@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:37:33 by chrmarti          #+#    #+#             */
/*   Updated: 2023/05/11 11:10:14 by chrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}
/*
int main() {
    // Test case 1: destination buffer is larger than source string
    char dst1[10] = "";
    const char *src1 = "hello";
    size_t result1 = ft_strlcpy(dst1, src1, sizeof(dst1));
    printf("Test case 1:\n");
    printf("Expected output: %zu %s\n", strlen(src1), src1);
    printf("Actual output: %zu %s\n", result1, dst1);

    // Test case 2: destination buffer is smaller than source string
    char dst2[3] = "";
    const char *src2 = "hello";
    size_t result2 = ft_strlcpy(dst2, src2, sizeof(dst2));
    printf("Test case 2:\n");
    printf("Expected output: %zu %s\n", strlen(src2), src2);
    printf("Actual output: %zu %s\n", result2, dst2);

    // Test case 3: source string is empty
    char dst3[10] = "hello";
    const char *src3 = "";
    size_t result3 = ft_strlcpy(dst3, src3, sizeof(dst3));
    printf("Test case 3:\n");
    printf("Expected output: %zu %s\n", strlen(src3), src3);
    printf("Actual output: %zu %s\n", result3, dst3);

    return 0;
}
*/
