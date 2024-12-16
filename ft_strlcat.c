/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:56:22 by dpaiva            #+#    #+#             */
/*   Updated: 2024/12/05 20:09:19 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t dst_len;
	size_t src_len;
	size_t i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && (dst_len + i + 1) < siz)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (i < siz)
		dst[dst_len + i] = '\0';
	if (siz <= dst_len)
		return (src_len + siz);
	else
		return (src_len + dst_len);
}

// #include <stdio.h>

// int main()
// {
// 	char dest[5] = "HELLO";
// 	char src[6] = "WORLD";
// 	size_t result = ft_strlcat(dest, src, 5);
// 	printf("Result: %s\n", dest);
// 	printf("Lenght : %zu\n", result);

// 	char dest[8] = "TOUT";
// 	char src[4] = "TOI";
// 	size_t result = ft_strlcat(dest, src, 4);
// 	printf("Result: %s\n", dest);
// 	printf("Lenght: %zu\n", result);
// 	return 0;

// 	char dest[20] = "BONJOUR";
// 	char src[] = " WORLD";
// 	size_t result = ft_strlcat(dest, src, 20);
// 	printf("Result: %s\n", dest);
// 	printf("Lenght : %zu\n", result);
// 	return (0);
// }
