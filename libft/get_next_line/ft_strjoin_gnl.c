/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_gnl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:01:21 by pgiroux           #+#    #+#             */
/*   Updated: 2024/09/04 13:33:29 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin_gnl(char *str, char *buffer)
{
	int		i;
	int		j;
	int		len;
	char	*newstr;

	if (!str || !buffer)
		return (NULL);
	len = ft_strlen(str) + ft_strlen(buffer);
	newstr = malloc(sizeof(char) * (len + 2));
	if (!newstr)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		newstr[i] = str[i];
		i++;
	}
	j = 0;
	while (buffer[j] != '\0' && buffer[j] != '\n')
		newstr[i++] = buffer[j++];
	if (buffer[j] == '\n' )
		newstr[i++] = '\n';
	newstr[i] = '\0';
	return (free(str), newstr);
}
