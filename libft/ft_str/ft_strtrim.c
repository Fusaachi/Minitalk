/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:49:11 by pgiroux           #+#    #+#             */
/*   Updated: 2024/07/29 10:35:46 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	isset(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		end;
	char	*newstr;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (0);
	end = (int)ft_strlen(s1);
	while (end > 0 && isset(set, s1[end - 1]))
		end--;
	while (i < end && isset(set, s1[i]))
		i++;
	newstr = malloc((end - i) + 1);
	if (!newstr)
		return (0);
	while (i < end)
		newstr[j++] = s1[i++];
	newstr[j] = '\0';
	return (newstr);
}
