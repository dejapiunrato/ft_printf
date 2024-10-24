/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piesito <piesito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:22:52 by psevilla          #+#    #+#             */
/*   Updated: 2024/10/24 20:14:24 by piesito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	uc;

	uc = c;
	while (*str)
	{
		if (*str == uc)
			return ((char *) str);
		str++;
	}
	if (uc == '\0')
		return ((char *) str);
	return (NULL);
}
