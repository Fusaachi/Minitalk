/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:23:13 by pgiroux           #+#    #+#             */
/*   Updated: 2024/09/12 10:38:32 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putnubbase(unsigned long adresse, char *base)
{
	int	count;

	count = 0;
	if (adresse >= 16)
		count = ft_putnubbase((adresse / 16), base);
	ft_putchar(base[(adresse % 16)]);
	return (count + 1);
}

int	ft_printpointer(void *adresse)
{
	int	count;

	count = 0;
	if (adresse == NULL)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_putnubbase((unsigned long)adresse, "0123456789abcdef");
	return (count);
}
