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
INCLUDES = includes/
LIBFT		= libft/
SRC_DIR = src/
OBJ_DIR = obj/

# Compilate

CC= gcc
CFLAGS = -Wall -Wextra -Werror -I
AR = ar rcs
RM = rm -f

# Colors
GREEN=\033[0;32m
BLUE=\033[0;34m
RED=\033[0;31m
YELLOW = \033[0;33m
WHITE= \033[0;37m

#Sources

SRC_FILES = file

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

#Rules

OBJSF		=	.cache_exists

all: $(NAME)

$(NAME) : $(OBJS)
			@make -C $(LIBFT)
			@$(AR) $(NAME) $(OBJS)
			@echo "$(GREEN)\n ✓ Creado $(NAME)\n$(WHITE)"

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJSF)
			@echo "$(BLUE) Compilando  ➟  $< $(WHITE)"
			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJSF):
			@mkdir -p $(OBJ_DIR)

clean : 
			@$(RM) -r $(OBJ_DIR)
			@$(RM) $(OBJSF)
			@echo "$(RED)\n ✗ ft_printf borrados.‼️\n$(WHITE)";

fclean : clean
			@$(RM) $(NAME)
			@make clean -C $(LIBFT)
			@$(RM) -f $(LIBFT)/libft.a
			@echo "$(YELLOW) Todo Super limpito...✌🏼$(WHITE)"

re: fclean all
			@echo "$(YELLOW) Borrado todo y recompilado...✌🏼$(WHITE)"

norm:
			@norminette $(SRCS) $(INCLUDES) | grep -v Norme -B1 || true

# Non-file targets
.PHONY: all clean fclean re norm
