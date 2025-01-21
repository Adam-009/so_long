SRC = ./utils.c ./value/find_c.c ./value/find_p.c ./value/find_e.c ./value/initialize_value.c ./map_checker/check_map.c ./map_checker/flood_fill.c error.c so_long.c texture.c
NAME = a.out
OBJS = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIB_PATH = ./my_libft
LIB = $(LIB_PATH)/libft.a
LIB_MAKEFILE = $(LIB_PATH)/Makefile


all: $(LIB) $(NAME)

$(LIB): 
	$(MAKE) -C $(LIB_PATH)

$(NAME): $(OBJS) $(LIB)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L$(LIB_PATH) -lft -g

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIB_PATH) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIB_PATH) fclean

re: fclean all

.PHONY: all clean fclean re

