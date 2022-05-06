# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awallet <awallet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 18:03:30 by awallet           #+#    #+#              #
#    Updated: 2022/05/03 16:46:33 by awallet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =   ft_strtrim.c \
		ft_calloc.c \
 		ft_isalnum.c \
 		ft_isalpha.c \
 		ft_isascii.c \
 		ft_isdigit.c \
 		ft_isprint.c \
 		ft_memchr.c \
 		ft_memcpy.c \
 		ft_memmove.c \
 		ft_memcmp.c \
 		ft_memset.c \
 		ft_strchr.c \
 		ft_strdup.c \
 		ft_strlcat.c \
 		ft_strlcpy.c \
 		ft_strlen.c \
 		ft_strncmp.c \
 		ft_strnstr.c \
 		ft_strrchr.c \
 		ft_tolower.c \
 		ft_toupper.c \
 		ft_substr.c \
		       
OBJS = $(SRC:.c=.o)

COMPILER_COMMAND = gcc

AR = ar rcs

RM = rm -f


CFLAGS = -Wall -Werror -Wextra

.c.o = $(COMPILER_COMMAND) $(CFLAGS) -c $< -o $(<:.c=.o)


$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY : all bonus clean fclean re