/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:27:35 by pgiroux           #+#    #+#             */
/*   Updated: 2024/07/29 10:33:10 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*j;

	j = s;
	i = 0;
	while (i < n)
	{
		j[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char str[6] = "coucou";
	ft_bzero(str, 2);
	printf("%s", str);
	return (0);
}*/