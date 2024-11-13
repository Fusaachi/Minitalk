/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:11:13 by pgiroux           #+#    #+#             */
/*   Updated: 2024/09/04 13:33:50 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*str;
	int			nboc;

	nboc = 1;
	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, buffer, 0) == -1)
		return (NULL);
	str = "";
	str = ft_strjoin(str, buffer);
	while (nboc > 0 && ft_check(buffer) == -1)
	{
		nboc = read(fd, buffer, BUFFER_SIZE);
		if (buffer[0] == '\0')
			return (free(str), NULL);
		else if (nboc == -1)
			return (str);
		buffer[nboc] = '\0';
		str = ft_strjoin_gnl(str, buffer);
	}
	return (ft_clearbuffer(buffer, ft_check(buffer)), str);
}
