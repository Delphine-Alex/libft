/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:06:18 by dpaiva            #+#    #+#             */
/*   Updated: 2024/11/19 18:23:37 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}

// #include <stdio.h>

// int     main(void)
// {
//     char s[5];
//     int i = 0;
//     ft_memset(s, 'd', sizeof(s));
//     while (i < 5)
//     {
//         printf("%c", s[i]);
//         i++;
//     }
//     return (0);
// }
