# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 12:03:23 by antdelga          #+#    #+#              #
#    Updated: 2022/11/29 13:55:22 by antdelga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \

OBJS	=	${SRCS:.c=.o}

NAME	=	libft.a

CC		=	gcc
CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
						ar rc ${NAME} ${OBJS}
						ranlib ${NAME}

clean:
						rm -f ${OBJS}

fclean:	clean
						rm -f ${NAME}

re:
						fclean all

.PHONY:					all clean fclean re

