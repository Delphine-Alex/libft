/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:35:55 by dpaiva            #+#    #+#             */
/*   Updated: 2024/12/05 20:24:33 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *result;

	if (size != 0 && nmemb > ((size_t)-1 / size))
		return (NULL);
	result = (void *)malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, nmemb * size);
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
// 	int i = 0;
// 	long count = 2147483648;
// 	int *result = (int *)calloc(count, sizeof(int));
// 	while (i < count)
// 	{
// 		printf("%d ", result[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(result);
// 	return (0);
// }
