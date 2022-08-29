SRC=    src/main.c \
	src/ai.c \
	src/annexes.c \
	src/fill_tab.c \
	src/game.c \
	src/inputs.c \
	src/lines.c \
	src/matchstick.c \
	src/memory.c \
	src/utils.c \

NAME=   matchstick

CC=     cc

RM=     rm -f

OBJ=    $(SRC:.c=.o)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:    $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
