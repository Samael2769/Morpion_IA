##
## EPITECH PROJECT, 2021
## Untitled (Workspace)
## File description:
## Makefile
##

SRC_DIR	=	sources/

TEST_DIR	=	tests/

LIB_DIR	=	lib/sm_libc/

SRC_FILES	=	game/create_map.c\
				game/end_condition.c\
				sm_ia/sm_tictactoe_ia.c\

SRC_FILES_MAIN	=	main.c\
					game/tictactoe.c\
					game/display_game.c\
					game/players.c\

TEST_FILES	=	test_TicTacToe.c\
				test_end_condition.c\

SRC	=	$(addprefix $(SRC_DIR), $(SRC_FILES))

SRC_TEST	=	$(addprefix $(TEST_DIR), $(TEST_FILES))

SRC_MAIN	=	$(addprefix $(SRC_DIR), $(SRC_FILES_MAIN))

OBJ	=	$(SRC:.c=.o)

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

##############################################################

CFLAGS	=	-W -Wall -Wextra

CPPFLAGS	=	-I./includes

LDFLAGS	=	-L./

LDLIBS	=	-lsm_libc

TEST_LIB	=	--coverage -lcriterion -lgcov

##############################################################

CC	=	gcc

PRNT	=	echo

COVERAGE	= gcovr

TEST_NAME	=	unit_test

NAME	=	TicTacToe

##############################################################

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_MAIN) make_lib
	@$(PRNT) -e "\e[0;31m Compiling ${NAME}... \e[0m"
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(LDFLAGS) $(LDLIBS)

make_lib:
	@$(PRNT) -e "\e[0;31m Making lib $(LIB_DIR)... \e[0m"
	$(MAKE) -C $(LIB_DIR)

clean:
	@$(PRNT) -e "\e[0;31m Deleting .o and .gc objects... \e[0m"
	$(RM) $(OBJ) $(OBJ_MAIN)
	$(RM) *.gc*
	$(MAKE) clean -C $(LIB_DIR)


fclean: clean
	@$(PRNT) -e "\e[0;31m Deleting execs... \e[0m"
	$(RM) $(NAME) $(TEST_NAME)
	$(MAKE) fclean -C $(LIB_DIR)

unit_test: fclean make_lib
	@$(PRNT) -e "\e[0;31m Compiling tests for $(NAME)... \e[0m"
	$(CC) -o $(TEST_NAME) $(SRC) $(SRC_TEST) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) $(TEST_LIB)

tests_run: unit_test
	@$(PRNT) -e "\e[0;31m Running tests for $(NAME)... \e[0m"
	./$(TEST_NAME)
	$(COVERAGE) --exclude $(TEST_DIR)
	$(COVERAGE) -b --exclude $(TEST_DIR)

re: fclean $(NAME)

.PHONY:	all make_lib clean fclean unit_test tests_run re