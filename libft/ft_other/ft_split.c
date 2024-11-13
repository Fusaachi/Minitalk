/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 1 by pgiroux           #+#    #+#             */
/*   Updated: 2024/05/29 11:08:46 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	i;
	size_t	nbword;

	i = 0;
	nbword = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			nbword++;
		i++;
	}
	return (nbword);
}

void	ft_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static char	**ft_init_counter(size_t *i, size_t *k, char const *s, char c)
{
	char	**res;

	*k = 0;
	*i = 0;
	res = malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;
	size_t	k;

	strs = ft_init_counter(&i, &k, s, c);
	if (!strs)
		return (NULL);
	while (k < ft_countword(s, c))
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		strs[k] = malloc((i - j + 1) * sizeof(char));
		if (!strs[k])
		{
			ft_free(strs);
			return (NULL);
		}
		ft_strlcpy(strs[k++], s + j, i - j + 1);
	}
	strs[k] = NULL;
	return (strs);
}

/*
int main()
{
	ft_split("coucou bande de nouilles", ' ');
}
*/