# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leoferre <leoferre@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 21:49:21 by leoferre          #+#    #+#              #
#    Updated: 2022/04/29 16:44:41 by leoferre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

SRCS =		ft_atoi.c		\
			ft_bzero.c		\
			ft_calloc.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_itoa.c		\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_memset.c		\
			ft_putchar_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_putstr_fd.c	\
			ft_split.c		\
			ft_strchr.c		\
			ft_strdup.c		\
			ft_striteri.c	\
			ft_strjoin.c	\
			ft_strlcat.c	\
			ft_strlcpy.c	\
			ft_strlen.c		\
			ft_strmapi.c	\
			ft_strncmp.c	\
			ft_strnstr.c	\
			ft_strrchr.c	\
			ft_strtrim.c	\
			ft_substr.c		\
			ft_tolower.c	\
			ft_toupper.c

OBJ =		$(SRCS:.c=.o)
RM =		rm -rf
AR =		ar -rcs
CC =		gcc
FLAGS =		-Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)

$(OBJ):	$(SRC)
		$(CC) $(FLAGS) -c $(SRCS)

clean:
		$(RM) $(OBJ)

fclean:	clean 
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re