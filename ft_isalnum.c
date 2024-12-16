/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:33:58 by dpaiva            #+#    #+#             */
/*   Updated: 2024/11/13 18:47:25 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
	return ((ft_isalpha(c)) || (ft_isdigit(c)));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c;

// 	c = 'a';
// 	printf("%d", ft_isalnum(c));
// 	return (0);
// }
