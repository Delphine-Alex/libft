/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:36:42 by dpaiva            #+#    #+#             */
/*   Updated: 2024/12/05 20:04:43 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t i;

	i = 0;
	if (siz > 0)
	{
		while (i < (siz - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// #include <stdio.h>

// int main(void)
// {
//     char dst[0];
//     char src[] = "Test";

//     printf("%zu", ft_strlcpy(dst, src, 4));
//     return (0);
// }
