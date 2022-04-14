# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: becastro <becastro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 10:13:11 by becastro          #+#    #+#              #
#    Updated: 2022/04/14 20:52:35 by becastro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c \
		ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c ft_strnstr.c ft_atoi.c \
		ft_strjoin.c ft_strtrim.c ft_split.c  ft_power.c ft_itoa.c ft_putchar_fd.c

OBJS = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(OBJS)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS): $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	@rm -r $(OBJS)

fclean:
	@rm -f $(NAME)

re: fclean all
