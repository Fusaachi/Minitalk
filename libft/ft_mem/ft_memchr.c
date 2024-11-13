/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:38:28 by pgiroux           #+#    #+#             */
/*   Updated: 2024/07/29 10:36:12 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const char		*ptrs;

	i = 0;
	ptrs = s;
	if (n == 0)
		return (NULL);
	while (ptrs[i] != (char)c && i < n - 1)
	{
		i++;
	}
	if (ptrs[i] == (char)c)
		return ((void *)s + i);
	return (NULL);
}

/*int main(void)
{
	const void *s;
	int c;

	s ="hello how are you";
	c = 'o';
	
	printf("%s", (char *)ft_memchr(s,c,4));
}*/