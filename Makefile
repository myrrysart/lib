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
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	ar rcs $(NAME) $(OBJS)

bonus: .bonus

.bonus: $(OBJS) $(BONUS_OBJS) $(HEADER)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	touch .bonus

%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f *.o
	rm -f .bonus

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all
.PHONY: all clean fclean re bonus 
