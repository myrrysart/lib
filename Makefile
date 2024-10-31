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
OBJS = ft_atoi.o, ft_bzero.o, ft_calloc.o, ft_isalnum.o, ft_isalpha.o, ft_isascii.o, ft_isdigit.o, ft_isprint.o, ft_itoa.o, ft_lstadd_back.o, ft_lstadd_front.o, ft_lstclear.o, ft_lstdelone.o, ft_lstiter.o, ft_lstlast.o, ft_lstmap.o, ft_lstnew.o, ft_lstsize.o, ft_memchr.o, ft_memcmp.o, ft_memcpy.o, ft_memmove.o, ft_memset.o, ft_putchar_fd.o, ft_putendl_fd.o, ft_putnbr_fd.o, ft_putstr_fd.o, ft_split.o, ft_strchr.o, ft_strdup.o, ft_striteri.o, ft_strjoin.o, ft_strlcat.o, ft_strlcpy.o, ft_strlen.o, ft_strmapi.o, ft_strncmp.o, ft_strnstr.o, ft_strrchr.o, ft_strtrim.o, ft_substr.o, ft_tolower.o, ft_toupper.o

all: $(OBJS)
	cc $(FLAGS) $(OBJS) -o $(NAME)
%.o: %.c
	cc -c $<
clean:
	rm *.o
fclean: clean
	rm libft.a
re: fclean
	$(MAKE) all
bonus:
	#Something about relinking?
