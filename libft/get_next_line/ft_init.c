/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 09:59:42 by pgiroux           #+#    #+#             */
/*   Updated: 2024/09/04 13:33:15 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_init(char *cp)
{
	char	*str;
	int		i;

	i = 0;
	while (cp[i] != '\0' && cp[i] != '\n')
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (cp[i] != '\0' && cp[i] != '\n')
	{
		str[i] = cp[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
