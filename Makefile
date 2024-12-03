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

#**********************#
#       TESTING        #
#**********************#
so: $(OBJS)
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
TEST_FILE = ft_putnbr_fd

test: .test

.test: $(filter-out $(TEST_FILE).o, $(OBJS))
	cc $(FLAGS) -g $(TEST_FILE).c -o test_exe $(filter-out $(TEST_FILE).o, $(OBJS))
	touch .test

tclean: clean
	rm -f .test
	rm -f .test_exe
#**********************#
#     TESTING OVER     #
#**********************#
.PHONY: all clean fclean re bonus 
