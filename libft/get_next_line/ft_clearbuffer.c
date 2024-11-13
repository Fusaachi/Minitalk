/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearbuffer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:03:40 by pgiroux           #+#    #+#             */
/*   Updated: 2024/09/04 13:33:06 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_clearbuffer(char *buffer, int i)
{
	int		j;
	int		itemp;
	int		len;
	char	*temp;

	i += 1;
	len = 0;
	j = 0;
	itemp = i;
	while (buffer[itemp++] != '\0')
		len++;
	temp = malloc(sizeof(char) * (len + 1));
	while (buffer[i] != '\0')
		temp[j++] = buffer[i++];
	temp[j] = '\0';
	i = 0;
	while (temp[i] != '\0')
	{
		buffer[i] = temp[i];
		i++;
	}
	buffer[i] = '\0';
	return (free(temp), buffer);
}
