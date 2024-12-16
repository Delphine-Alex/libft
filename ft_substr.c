/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:54:46 by dpaiva            #+#    #+#             */
/*   Updated: 2024/12/05 20:34:30 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t str_len;
	char *copy;

	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	str_len = ft_strlen(s + start);
	if (len > str_len)
		len = str_len;
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, s + start, len);
	copy[len] = '\0';
	return (copy);
}

// #include <stdio.h>

// int main(void)
// {
// 	char s[] = "Bonjour";

// 	char *copy = ft_substr(s, 4, 20);

// 	printf("%s", copy);
// 	free(copy);
// 	return (0);
// }
