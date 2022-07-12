# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 19:20:00 by nmota-bu          #+#    #+#              #
#    Updated: 2022/07/12 19:37:24 by nmota-bu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = libftprintf.h

# Dir
SRC = src/
INCLUDE = include/
LIBS = libft/

OBJS = $(SRCS:.c=.o)
SRCS = file.c

# Colors
GREEN=\033[0;32m
BLUE=\033[0;34m
RED=\033[0;31m
WHITE= @echo "\033[0;37m"

# Compilate
CC=/usr/bin/gcc
CFLAGS = -Wall -Wextra -Werror
AR=/usr/bin/ar
RM = rm -f

# Rules
%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@
	@echo "$(BLUE) ✓ Creado $(NAME)\n"

all: $(OBJ) $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(AR) rcs $(NAME) $(OBJS)
	@echo "$(GREEN) ✓ Creado $(NAME)\n"
	$(WHITE)

clean :
	$(RM) $(OBJS) $(OBJSBONUS)
	@echo "$(RED) ✗  Borrado de los archivos\n";
	$(WHITE)

fclean : clean
	$(RM) $(NAME)

# Non-file targets
.PHONY: all clean fclean re
