CC=/usr/bin/gcc
AR=/usr/bin/ar
HEADER = libreria.h
TARGET = myProgramita
NAME = libreria.a
RM = rm -f

OBJS = $(SRCS:.c=.o)
OBJSBONUS = $(SRCSBONUS:.c=.o)
SRCS = dividir.c multiplicacion.c resta.c suma.c test_div.c
SRCSBONUS = exponencial.c

# Colors
GREEN=\033[0;32m
BLUE=\033[0;34m
RED=\033[0;31m
# WHITE= @printf "\033[0;37m"
WHITE= @echo "\033[0;37m"

CFLAGS = -Wall -Wextra -Werror

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@
	@echo "$(BLUE) ✓ Creando $(NAME)\n"	
#para incluir los archivos  .h
#  -include $(OBJ_DIR)/*.d

all: $(OBJS) $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN) ✓ Creando $(NAME)\n"
	$(WHITE)

bonus:  $(OBJS) $(OBJSBONUS) $(HEADER)
				$(CC) $(CFLAGS) $(OBJS) $(OBJSBONUS) -o $(NAME)
				@touch $@

clean : 
				$(RM) $(OBJS) $(OBJSBONUS)
# @printf "$(RED) Borrado de los archivos\n";
	@echo "$(RED) Borrado de los archivos\n";
	$(WHITE)

fclean : clean
				 $(RM) $(NAME)
				 $(RM) bonus

re: fclean all

# Non-file targets
.PHONY: all clean fclean re

# cc cual es el compilador 
# $< $@ sustitulle los nombres del target file y del source file
# https://www.youtube.com/watch?v=0XlVyZAfQEMß