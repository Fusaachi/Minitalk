/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:33:43 by pgiroux           #+#    #+#             */
/*   Updated: 2024/10/28 13:27:50 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	send_len(int pid, char *message)
{
	int	bit;
	int	i;

	i = 0;
	while (message[i])
		i++;
	bit = 31;
	while (bit >= 0)
	{
		if (i & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(50);
		bit--;
	}
}

void	send_signal(int pid, char *message)
{
	int	bit;
	int	i;

	i = 0;
	while (message[i])
	{
		bit = 7;
		while (bit >= 0)
		{
			if (message[i] & (1 << bit))
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(50);
			bit--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		server_id;
	char	*message;

	if (argc == 3)
	{
		server_id = ft_atoi(argv[1]);
		if (!server_id)
			return (ft_putstr_fd("Error,\nServeur id is wrong.\n", 2), 1);
		message = argv[2];
		if (ft_strlen(message) == 0)
			return (ft_putstr_fd("Error,\nYour message is empty.\n", 2), 1);
		send_len(server_id, message);
		send_signal(server_id, message);
	}
	else
		return (ft_putstr_fd("Error,\nToo few or too much argument.\n", 2), 1);
}
