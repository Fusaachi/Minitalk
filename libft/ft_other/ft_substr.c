/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:16:25 by pgiroux           #+#    #+#             */
/*   Updated: 2024/07/29 10:35:50 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	lens;
	char	*newstr;

	i = 0;
	lens = ft_strlen(s) - start;
	if (len < lens)
		lens = len;
	if (start >= ft_strlen(s))
		lens = 0;
	newstr = malloc (lens + 1);
	if (!newstr)
		return (0);
	while (i < lens && s[i] != '\0')
		newstr[i++] = s[start++];
	newstr[i] = '\0';
	return (newstr);
}
