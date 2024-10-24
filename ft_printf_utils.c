/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piesito <piesito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:57:00 by piesito           #+#    #+#             */
/*   Updated: 2024/10/24 23:51:22 by piesito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_chr(char c)
{
	return (write(1, &c, 1));
}

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	ft_print_dgt(int n)
{
	char	*str;

	str = ft_itoa(n);
	return (ft_print_str(str));
}

int	ft_print_udt(unsigned int n)
{
	int	i;
	if (n >= 10)
	{
		i += ft_print_udt(n / 10);
	}
	i += write(1, &((char []){(n % 10) + '0', '\0'}), 1);
	return (i);
}

int	ft_print_hex(unsigned int n, char c)
{
	char	*base;

	if (c = 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
}
