/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:09:40 by pgiroux           #+#    #+#             */
/*   Updated: 2024/07/29 10:35:13 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < n)
			i++;
	while (src[j] != '\0' && i + j < n - 1)
	{
		dst[j + i] = src[j];
		j++;
	}
	if (i < n)
		dst[i + j] = '\0';
	return (ft_strlen(src) + i);
}
/*
int	main(void)
{
	char dst[20] = "hello ";
	char src[]  = "world";

	printf("%zu", ft_strlcat(dst,src,20));
	printf("%s", dst);
	return(0);
}*/
