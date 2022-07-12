# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 22:10:52 by nmota-bu          #+#    #+#              #
#    Updated: 2022/07/12 19:23:20 by nmota-bu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=/usr/bin/gcc
AR=/usr/bin/ar
HEADER = libft.h
NAME = libft.a
RM = rm -f

OBJS = $(SRCS:.c=.o)
OBJSBONUS = $(SRCSBONUS:.c=.o)
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	   ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	   ft_atoi.c ft_strmapi.c ft_striteri.c ft_calloc.c ft_strdup.c \
	   ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCSBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		   	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		   	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# Colors
GREEN=\033[0;32m
BLUE=\033[0;34m
RED=\033[0;31m
WHITE= @echo "\033[0;37m"

CFLAGS = -Wall -Wextra -Werror

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@
	@echo "$(BLUE) ✓ Creado $(NAME)\n"	

all: $(OBJS) $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(AR) rcs $(NAME) $(OBJS)
	@echo "$(GREEN) ✓ Creado $(NAME)\n"
	$(WHITE)

bonus:  $(OBJS) $(OBJSBONUS) $(HEADER)
		$(AR) rcs $(NAME) $^
				@touch $@

clean : 
				$(RM) $(OBJS) $(OBJSBONUS)
	@echo "$(RED) ✗  Borrado de los archivos\n";
	$(WHITE)

fclean : clean
				 $(RM) $(NAME)
				 $(RM) bonus

re: fclean all

# Non-file targets
.PHONY: all clean fclean re
