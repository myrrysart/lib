# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Jyniemit <jyniemit@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 15:03:53 by Jyniemit          #+#    #+#              #
#    Updated: 2024/10/31 14:35:06 by Jyniemit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRCS = $(filter-out ft_lst%, $(wildcard ft_*.c))
OBJS = $(SRCS:.c=.o) 
BONUS_SRCS = $(wildcard ft_lst*.c)
BONUS_OBJS = $(BONUS_SRCS:.c=.o) 

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	cc $(FLAGS) -c $< -o $@
clean:
	rm *.o
fclean: clean
	rm $(NAME)
re: fclean
	$(MAKE) all
bonus:
	#Something about relinking?
.PHONY: all %.o clean fclean re bonus
