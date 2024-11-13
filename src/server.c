/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:39:34 by pgiroux           #+#    #+#             */
/*   Updated: 2024/11/13 09:53:59 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

int	len_signal(int signum, int boolean)
{
	static long long	i = 2147483648;
	static int			bit = 0;
	static int			value = 0;

	if (boolean)
	{
		value = 0;
		i = 2147483648;
	}
	if (signum == SIGUSR1)
	{
		value += i;
		i /= 2;
	}
	if (signum == SIGUSR2)
		i /= 2;
	bit++;
	if (bit == 32)
	{
		bit = 0;
		return (value);
	}
	return (-1);
}

void	init_str(int signum, t_minitalk *data)
{
	if (data->c < 32)
	{
		data->len = len_signal(signum, data->boolean);
		data->boolean = 0;
		data->c++;
		return ;
	}
	if (!data->str)
	{
		data->str = malloc(sizeof(char *) * (data->len + 1));
		if (!data->str)
			return ;
	}
	if (signum == SIGUSR1)
	{
		data->value += data->i;
		data->i /= 2;
	}
	if (signum == SIGUSR2)
		data->i /= 2;
	data->bit++;
}

void	handle_signal(int signum)
{
	static t_minitalk	data = {128, 0, 0, 0, 0, 0, NULL, 1};

	init_str(signum, &data);
	if (data.bit == 8)
	{
		data.str[data.j] = data.value;
		data.value = 0;
		data.i = 128;
		data.bit = 0;
		data.j++;
	}
	if (data.j == data.len)
	{
		data.str[data.j] = '\0';
		write(1, data.str, data.len);
		data.str = NULL;
		data.boolean = 1;
		data.c = 0;
		data.j = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error,\nToo much arguments.\n");
		return (1);
	}
	pid = getpid();

	ft_printf("%i\n", pid);
	while (1)
	{
		signal(SIGUSR1, handle_signal);
		signal(SIGUSR2, handle_signal);
	}	
}
