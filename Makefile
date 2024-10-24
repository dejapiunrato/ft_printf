# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: piesito <piesito@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 19:42:52 by piesito           #+#    #+#              #
#    Updated: 2024/10/24 20:14:15 by piesito          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CCFLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRCS =	ft_flags.c \
		ft_printf_utils.c \
		ft_printf.c

OBJS = $(SRCS: .c=.o)
