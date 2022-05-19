CC=/usr/bin/gcc
AR=/usr/bin/ar
HEADER = libft.h
NAME = libft.a
RM = rm -f

OBJS = $(SRCS:.c=.o)
OBJSBONUS = $(SRCSBONUS:.c=.o)
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	   ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c
//SRCSBONUS = exponencial.c

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
# $(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN) ✓ Creado $(NAME)\n"
	$(WHITE)

//bonus:  $(OBJS) $(OBJSBONUS) $(HEADER)
				$(CC) $(CFLAGS) $(OBJS) $(OBJSBONUS) -o $(NAME)
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
