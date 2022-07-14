# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/13 04:36:32 by vde-vasc          #+#    #+#              #
#    Updated: 2022/07/14 18:16:01 by vde-vasc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

SRC				= ./src

CFLAGS			= -Wall -Wextra -Werror 
CC				= gcc
FLAGLIB			= -rcs
RM				= rm -f

LIBFT_DIR		= ./libft
LIBFT			= ./libft/libft.a

FT_PRINTF		= printf_utils.c ft_puthexa.c ft_printf.c argument_case.c 
OBJECTS			= $(FT_PRINTF:.c=.o)

all:	$(NAME)

all:	$(NAME)

$(NAME): $(LIBFT) $(OBJECTS)
	cp $(LIBFT) $(NAME)
	ar $(FLAGLIB) $(NAME) $(OBJECTS)

$(LIBFT): $(LIBFT_DIR)
	$(MAKE) -C $(LIBFT_DIR)

%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJECTS)

fclean:	clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
