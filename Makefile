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

NAME		= libftprintf.a

CC			= cc
CCFLAGS		= -Wall -Werror -Wextra
RM			= rm -rf

SRCS		=	ft_printf.c \
				ft_printf_utils.c

OBJS_DIR	= objs
OBJS 		= $(SRCS:%.c=$(OBJS_DIR)/%.o)

LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

$(OBJS_DIR)/%.o: %.c
	@$(CC) $(CCFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(LIBFT) $(OBJS_DIR) $(OBJS)
	@cp $(LIBFT) $(NAME)
	@ar crs $(NAME) $(OBJS)

$(LIBFT):
	@make -C $(LIBFT_DIR) bonus

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

clean: 
	@make -C $(LIBFT_DIR) clean
	@$(RM) $(OBJS_DIR)

fclean:	clean
	@make -C $(LIBFT_DIR) fclean
	@$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re