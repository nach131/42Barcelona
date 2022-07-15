# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 22:10:52 by nmota-bu          #+#    #+#              #
#    Updated: 2022/07/15 14:50:47 by nmota-bu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDES = ../includes/
SRC_DIR = src/
OBJ_DIR = obj/
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

IS_DIR = is/
IS_FILES	= ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint

LST_DIR = lst/
LST_FILES = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast	ft_lstadd_back \
			ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

MEM_DIR = mem/
MEM_FILES = ft_bzero ft_calloc ft_memcmp ft_memcpy ft_memchr ft_memmove \
			ft_memset

PUT_DIR = put/
PUT_FILES = ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd 

STR_DIR = str/
STR_FILES = ft_split ft_strchr ft_strdup ft_striteri ft_strjoin ft_strlcat \
			ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr ft_strrchr \
			ft_strtrim ft_substr

TO_DIR = to/
TO_FILES = ft_atoi ft_itoa ft_tolower ft_toupper

SRC_FILES+=$(addprefix $(IS_DIR),$(IS_FILES))
SRC_FILES+=$(addprefix $(LST_DIR),$(LST_FILES))
SRC_FILES+=$(addprefix $(MEM_DIR),$(MEM_FILES))
SRC_FILES+=$(addprefix $(PUT_DIR),$(PUT_FILES))
SRC_FILES+=$(addprefix $(STR_DIR),$(STR_FILES))
SRC_FILES+=$(addprefix $(TO_DIR),$(TO_FILES))

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

#Rules

OBJSF		=	.cache_exists

all: $(NAME)

$(NAME) : $(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@ranlib $(NAME)
			@echo "$(GREEN)\n ✓ Creado $(NAME)\n$(WHITE)"

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJSF)
			@echo "$(BLUE) Compilando  ➟  $< $(WHITE)"
			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# ➤

$(OBJSF):
			@mkdir -p $(OBJ_DIR)
			@mkdir -p $(OBJ_DIR)$(IS_DIR)
			@mkdir -p $(OBJ_DIR)$(LST_DIR)
			@mkdir -p $(OBJ_DIR)$(MEM_DIR)
			@mkdir -p $(OBJ_DIR)$(PUT_DIR)
			@mkdir -p $(OBJ_DIR)$(STR_DIR)
			@mkdir -p $(OBJ_DIR)$(TO_DIR)

clean : 
			@$(RM) -rf $(OBJ_DIR)
			@$(RM) -f $(OBJSF)
			@echo "$(RED)\n ✗ Archivos objetos libft borrados.‼️\n$(WHITE)";

fclean : clean
			@$(RM) -f $(NAME)
			@echo "$(BLUE) Todo Super limpito...✌🏼$(WHITE)"

re: fclean all
			@echo "$(YELLOW) Borrado todo y recompilado...✌🏼$(WHITE)"

norm:
			@norminette $(SRCS) $(INCLUDES) | grep -v Norme -B1 || true

# Non-file targets
.PHONY: all clean fclean re norm
