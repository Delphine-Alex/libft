/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:07:00 by dpaiva            #+#    #+#             */
/*   Updated: 2024/12/12 17:43:20 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void *ft_memmove_forward(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

static void *ft_memmove_backward(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = n;
	while (i > 0)
	{
		i--;
		d[i] = s[i];
	}
	return (dest);
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		return (ft_memmove_forward(dest, src, n));
	else
		return (ft_memmove_backward(dest, src, n));
}

// #include <stdio.h>

// int main() {
//     char str[] = "ABCDEFG";
//     char dest[] = "CDEFG";

//     ft_memmove(str + 2, str, 4);

//     printf("%s\n", dest);
//     return 0;
// }
