/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 08:44:38 by pgiroux           #+#    #+#             */
/*   Updated: 2024/07/29 10:33:26 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t elementCount, size_t size)
{
	size_t	i;
	char	*result;

	i = 0;
	if (size == 0 || elementCount == 0)
		return (malloc (0));
	if (elementCount > (((size_t) -1 / size)))
		return (0);
	result = malloc(size * elementCount);
	if (!result)
		return (0);
	while (i < elementCount * size)
	{
		result[i] = 0;
		i++;
	}
	return ((void *)result);
}
