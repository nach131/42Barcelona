CC=/usr/bin/gcc
AR=/usr/bin/ar
HEADER = libreria.h
TARGET = myProgramita
NAME = libreria.a
RM = rm -f
# OBJ_DIR = ../obj
# BIN_DIR = ../bin
# INC_DIR = ../include
# SRC_DIR = .
OBJS = $(SRCS:.c=.o)
OBJSBONUS = $(SRCSBONUS:.c=.o)
SRCS = dividir.c multiplicacion.c resta.c suma.c test_div.c 

SRCSBONUS = exponencial.c

# Colors
GREEN=\033[0;32m
BLUE=\033[0;34m
RED=\033[0;31m

# CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)
CFLAGS = -Wall -Wextra -Werror

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@
# printf "$(BLUE) ✓ Creando $(NAME)\n"
#para incluir los archivos  .h
#  -include $(OBJ_DIR)/*.d

all: $(OBJS) $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
#@printf "$(GREEN) ✓ Creando $(NAME)\n"

bonus:  $(OBJS) $(OBJSBONUS) $(HEADER)
				$(CC) $(CFLAGS) $(OBJS) $(OBJSBONUS) -o $(NAME)
				@touch $@

clean : 
				$(RM)  $(OBJS) $(OBJSBONUS)
#@printf "$(RED) Borrado de los archivos\n";

fclean : clean
				 $(RM) $(NAME)
				 $(RM) bonus

re: fclean all

# Non-file targets
.PHONY: all clean fclean re

# cc cual es el compilador 
# $< $@ sustitulle los nombres del target file y del source file
# https://www.youtube.com/watch?v=0XlVyZAfQEMß