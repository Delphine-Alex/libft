/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:47:21 by dpaiva            #+#    #+#             */
/*   Updated: 2024/12/05 20:58:03 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ptr;
	size_t i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((char *)ptr + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
//     char s[] = "Hello world!";
//     char c = '\0';

//     char * result;
//     result = ft_memchr(s, c, sizeof(s));

//     printf("%s\n", result);
//     return (0);
// }
