/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:34:24 by pgiroux           #+#    #+#             */
/*   Updated: 2024/10/29 09:28:21 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "libft/libft.h"
# include <signal.h>

void	send_signal( int pid, char *message);

typedef struct s_minitalk
{
	int		i;
	int		c;
	int		bit;
	int		value;
	int		len;
	int		j;
	char	*str;
	int		boolean;
}t_minitalk;

#endif