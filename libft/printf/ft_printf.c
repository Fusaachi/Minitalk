/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:48:29 by pgiroux           #+#    #+#             */
/*   Updated: 2024/09/12 10:37:42 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, format);
	i = 0;
	count = 0;
	if (format == NULL)
		return (0);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count = ft_putparams(format, &i, count, ap);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}

int	ft_putparams(const char *format, int *i, int count, va_list ap)
{
	if (format[*i] == 'i' || format[*i] == 'd')
		count += ft_putnbr(va_arg(ap, int));
	else if (format[*i] == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (format[*i] == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (format[*i] == 'u')
		count += ft_printunsigned(va_arg(ap, unsigned int));
	else if (format[*i] == 'x')
		count += ft_putnbrbase(va_arg(ap, int), "0123456789abcdef");
	else if (format[*i] == 'X')
		count += ft_putnbrbase(va_arg(ap, int), "0123456789ABCDEF");
	else if (format[*i] == 'p')
		count += ft_printpointer(va_arg(ap, void *));
	else if (format[*i] == '%')
		count += ft_putchar('%');
	return (count);
}

// int	main(void)
// {
// 	int	*a;
// 	int b = 5;
// 	a = NULL;
// 	printf("%i\n",ft_printf("%p\n", (void*)0));
// 	printf("%i\n",printf("%p\n",(void*)0 ));
// }
