/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:22:13 by pgiroux           #+#    #+#             */
/*   Updated: 2024/07/29 10:34:37 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	temp;
	char	c;

	temp = n;
	if (temp < 0)
	{
		temp *= -1;
		write(fd, "-", 1);
	}
	if (temp >= 10)
		ft_putnbr_fd(temp / 10, fd);
	c = (temp % 10) + 48;
	write (fd, &c, 1);
}
