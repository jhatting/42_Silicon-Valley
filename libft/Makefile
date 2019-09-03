# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shat <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/02 20:01:21 by shat              #+#    #+#              #
#    Updated: 2019/09/03 13:38:10 by shat             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#look for restricts

NAME = libft.a
LIBNAMES = $(MANDATORY_FNS) $(BONUS_FNS)

MANDATORY_FNS = ft_atoi ft_isprint ft_memcmp ft_putchar_fd ft_strcat ft_strdup ft_strlen ft_strnequ ft_strsub \
				ft_bzero ft_isspace ft_memcpy ft_putendl ft_strchr ft_strequ ft_strmap ft_strnew ft_strtrim \
				ft_isalnum ft_itoa ft_memdel ft_putendl_fd ft_strcl ft_striter ft_strmapi ft_strnstr ft_tolower \
				ft_isalpha ft_memalloc ft_memmove ft_putnbr_fd ft_strcmp ft_striteri ft_strncat ft_strrchr ft_toupper \
				ft_isascii ft_memccpy ft_memset ft_putstr ft_strcpy ft_strjoin ft_strncmp ft_strsplit ft_isdigit \
				ft_memchr ft_putchar ft_putstr_fd ft_strdel ft_strlcat ft_strncpy ft_strstr
BONUS_FNS = ft_lstnew ft_lstdelone ft_lstdel ft_lstadd ft_lstiter ft_lstmap 
CFILES = $(addsuffix .c, $(LIBNAMES))
OFILES = $(addsuffix .o, $(LIBNAMES))
SRC = .
INCLUDE = .
CC = gcc -Wall -Wextra -Werror

.PHONY: all
	all: $(NAME)

$(NAME): $(OFILES)
	ar -rcs $(NAME) $(OFILES)

.PHONY: objects
	objects: $(CFILES)
	$(CC) -C -I$(INCLUDE) $(addsuffix $(SRC)/,$(CFILES))

.PHONY: clean
	clean:
	bin/rm -f $(OFILES)

.PHONY: fclean
	fclean: clean
	/bin/rm -f $(NAME)

.PHONY: re
	re: fclean $(NAME)
