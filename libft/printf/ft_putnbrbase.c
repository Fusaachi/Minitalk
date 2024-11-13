/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:56:45 by pgiroux           #+#    #+#             */
/*   Updated: 2024/09/12 10:38:47 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putnbrbase(unsigned int integer, char *base)
{
	long	temp;
	int		count;

	count = 0;
	temp = integer;
	if (integer < 0)
	{
		temp *= -1;
		ft_putchar('-');
		count++;
	}
	if (temp >= (int)ft_strlen(base))
		count = ft_putnbrbase(temp / ft_strlen(base), base);
	ft_putchar(base[(temp % ft_strlen(base))]);
	return (count + 1);
}
