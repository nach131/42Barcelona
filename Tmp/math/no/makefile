# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 11:13:55 by nmota-bu          #+#    #+#              #
#    Updated: 2022/05/10 20:11:25 by nmota-bu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Non-file targets
.PHONY: all clean fclean re

# Compilar y binarios
CC=/usr/bin/gcc
AR=/usr/bin/ar
RANLIB=/usr/bin/ranlib
RM=/bin/rm
MKDIR=/bin/mkdir

# Colors
GREEN=\033[0;32m
BLUE=\033[0;34m
RED=\033[0;31m

# Target Library
NAME=libreria.a

# Source and Objects
SRCDIR=src
SRC=$(wildcard $(SRCDIR)/*.c)

OBJDIR=obj
OBJ=$(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))

# Flags and Header
CFLAGS=-Wall -Wextra -Werror

INC=include
HEADER=$(INC)/libreria.h

# Default make
all: $(OBJDIR) $(NAME)

$(NAME): $(SRC) $(OBJ) $(HEADER) Makefile
	@$(AR) rc $(NAME) $(OBJ)
	@$(RANLIB) $(NAME)
	@printf "$(GREEN) ✓ Construllendo $(NAME)\n"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) -I$(INC) -c $< -o $@
	@printf "$(GREEN) ✓ Construllendo $@\n"

# Clean objects
clean:
	@if [ -e $(OBJDIR) ]; \
	then \
		$(RM) -rf $(OBJDIR); \
		printf "$(BLUE) ✗ Borrado de archivos objetos\n"; \
	fi;

# Clean in depth
fclean: clean
	@if [ -e $(NAME) ]; \
	then \
		$(RM) -f $(NAME); \
		printf "$(RED) ✗ Borrado $(NAME)\n"; \
	fi;

# Remake
re: fclean all
	
$(OBJDIR):
	@$(MKDIR) $(OBJDIR)
	@printf "$(GREEN) ✓ Creando $(OBJDIR) dir\n"
