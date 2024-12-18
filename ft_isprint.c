/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:08:58 by dpaiva            #+#    #+#             */
/*   Updated: 2024/11/13 20:15:06 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char c = '\t';
// 	printf("%d", ft_isprint(c));
// 	return (0);
// }
