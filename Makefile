# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clballes <clballes@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/12 16:57:29 by clballes          #+#    #+#              #
#    Updated: 2023/06/07 13:39:58 by chrmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c \
       ft_isdigit.c \
    ft_isalnum.c \
    ft_isascii.c \
    ft_isprint.c \
    ft_strlen.c \
    ft_memset.c \
    ft_memmove.c \
    ft_bzero.c \
    ft_memcpy.c \
    ft_strlcpy.c \
    ft_strlcat.c \
    ft_toupper.c \
    ft_tolower.c \
    ft_strncmp.c \
    ft_strchr.c \
    ft_strrchr.c \
    ft_memchr.c \
    ft_memcmp.c \
    ft_strnstr.c \
    ft_atoi.c \
    ft_calloc.c \
    ft_strdup.c \
    ft_substr.c \
    ft_strjoin.c \
    ft_strtrim.c \
    ft_split.c \
    ft_itoa.c \
    ft_strmapi.c \
    ft_striteri.c \
    ft_putchar_fd.c \
    ft_putstr_fd.c \
    ft_putendl_fd.c \
    ft_putnbr_fd.c 

BONUS = ft_lstmap_bonus.c ft_lstsize_bonus.c ft_lstiter_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c $(SRCS)

OBJS = $(SRCS:%.c=%.o)

OBJS_BONUS = $(BONUS:%.c=%.o)

LIB = libft.h

#Comandoos

%.o : %.c
	${CC} ${CFLAGS} -I./ -c $< -o $@

all: ${NAME}

${NAME} : ${OBJS} ${LIB}
#	${CC} ${OBJS} libft.a -o ${NAME}
	@ar -rcs ${NAME} ${OBJS}
	@ranlib ${NAME}

bonus: $(OBJS_BONUS)
	 @ar -rcs ${NAME} ${OBJS_BONUS}
clean:
	rm -rf ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

rebonus: fclean bonus

.PHONY: fclean, all, clean, re
