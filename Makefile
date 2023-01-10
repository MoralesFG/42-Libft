# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 12:31:18 by framoral          #+#    #+#              #
#    Updated: 2023/01/10 11:16:16 by framoral         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_strnstr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_itoa.c ft_striteri.c 
OBJS = $(SOURCE:.c=.o) # todo lo que tenemos en fuente pasará a ser .o #
SOURCEBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJSBONUS = $(SOURCEBONUS:.c=.o) # LO MISMO #

all: $(NAME)

$(NAME): 
	gcc -c $(FLAGS) $(SOURCE)
	ar -rcs $(NAME) $(OBJS)

clean: 
	rm -f  $(OBJS)  $(OBJSBONUS)

fclean: clean
	rm -f  $(NAME)

bonus: 
	gcc -c $(FLAGS) $(SOURCEBONUS)
	ar -rcs $(NAME) $(OBJSBONUS)

re: fclean all

.PHONY: all clean fclean bonus re