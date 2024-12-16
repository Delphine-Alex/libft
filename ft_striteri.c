/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:57:34 by dpaiva            #+#    #+#             */
/*   Updated: 2024/12/05 20:46:52 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void function(unsigned int index, char *c)
// {
//   if (index % 2 != 0)
//   {
//     *c = *c - 32;
//   }
// }

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// int main(void)
// {
//   char s[] = "hello";

//   ft_striteri(s, function);
//   printf("%s", s);
//   return (0);
// }
