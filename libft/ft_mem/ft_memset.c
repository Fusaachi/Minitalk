/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:01:49 by pgiroux           #+#    #+#             */
/*   Updated: 2024/07/29 10:34:22 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = dest;
	i = 0;
	while (i != count)
	{
		ptr[i] = c;
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char str = "coucou";
	ft_memset(str, '*',4);
	printf("%s",str);
	return (0);
}*/