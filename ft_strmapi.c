/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:48:57 by dpaiva            #+#    #+#             */
/*   Updated: 2024/12/05 20:43:16 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char function(unsigned int index, char c)
// {
//   if (index % 2 == 0)
//     return c + 1;
//   else
//     return c - 1;
// }

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *copy;
	size_t i;

	copy = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		copy[i] = (*f)(i, s[i]);
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// #include <stdio.h>

// int main(void)
// {
//   char s[] = "hello";

//   char *copy = ft_strmapi(s, function);
//   printf("%s", copy);
//   free(copy);
//   return (0);
// }
