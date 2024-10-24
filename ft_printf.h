/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piesito <piesito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:24:36 by piesito           #+#    #+#             */
/*   Updated: 2024/10/25 01:35:46 by piesito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stdint.h>
# include "libft/libft.h"

// ft_printf.c
int	ft_printf(const char *str, ...);
int	ft_parse(char c, va_list args);

// ft_printf_utils.c
int	ft_print_chr(char c);
int	ft_print_str(char *str);
int	ft_print_num(long n, char c);

#endif