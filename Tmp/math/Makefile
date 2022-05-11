# Non-file targets
.PHONY: all clean fclean re

# Compiler and binaries
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
NAME=libft.a

# Source and Objects
SRCDIR=src
SRC=$(wildcard $(SRCDIR)/*.c)

OBJDIR=obj
OBJ=$(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))

# Flags and Header
CFLAGS=-Wall -Wextra -Werror

INC=include
HEADER=$(INC)/libft.h

# Default make
all: $(OBJDIR) $(NAME)

$(NAME): $(SRC) $(OBJ) $(HEADER) Makefile
	@$(AR) rc $(NAME) $(OBJ)
	@$(RANLIB) $(NAME)
	@printf "$(GREEN) ✓ Building $(NAME)\n"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) -I$(INC) -c $< -o $@
	@printf "$(GREEN) ✓ Building $@\n"

# Clean objects
clean:
	@if [ -e $(OBJDIR) ]; \
	then \
		$(RM) -rf $(OBJDIR); \
		printf "$(BLUE) ✗ Deletion of object files\n"; \
	fi;

# Clean in depth
fclean: clean
	@if [ -e $(NAME) ]; \
	then \
		$(RM) -f $(NAME); \
		printf "$(RED) ✗ Deletion of $(NAME)\n"; \
	fi;

# Remake
re: fclean all
	
$(OBJDIR):
	@$(MKDIR) $(OBJDIR)
	@printf "$(GREEN) ✓ Creating $(OBJDIR) dir\n"
