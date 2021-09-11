##
## EPITECH PROJECT, 2021
## Untitled (Workspace)
## File description:
## Makefile
##

SRC		=	sm_realloc.c\
			sm_find_char.c\
			sm_strlen.c\
			sm_strcat.c\
			sm_strconcat.c\
			sm_calloc.c\
			sm_itoa.c\
			sm_revstr.c\
			sm_convert_base.c\
			sm_strcpy.c\
			sm_strdup.c\
			sm_strcmp.c\
			sm_putstr.c\
			sm_freetab.c\
			sm_atoi.c\
			sm_strstr.c\
			sm_count_char.c\
			sm_tablen.c\
			sm_strtoarr.c\
			sm_freeall.c\
			sm_parser.c\
			sm_puttab.c\
			sm_put_nbr.c\
			mini_printf.c\

OBJ		=		$(SRC:c=o)

NAME	=		libsm_libc.a

INCLUDE_NAME	=	sm_libc.h

#####################################
TEST_NAME	=	unit_test

DIR_TEST	=	tests/

TEST_ADD	=	tests_

SRC_TEST	=	$(addprefix $(TEST_ADD), $(SRC))

OBJ_TEST	=	$(addprefix $(DIR_TEST), $(SRC_TEST))

LDLIBS	=	--coverage -lcriterion

COVR	=	gcovr
#####################################

AR	=	ar

RM	=	rm

COPY	=	cp

all: $(NAME)

$(NAME): $(OBJ)
		$(AR) rc $(NAME) $(OBJ)
		$(COPY) $(NAME) ../../
		$(COPY) $(INCLUDE_NAME) ../../includes/

clean:
		$(RM) -f $(OBJ)

fclean: clean
		$(RM) -f $(NAME)
		$(RM) -f *gc*
		$(RM) -f $(TEST_NAME)
		$(RM) -f ../../$(NAME)

unit_test: fclean $(NAME)
	touch $(OBJ_TEST)
	gcc -o $(TEST_NAME) $(SRC) $(OBJ_TEST) $(LDLIBS)

tests_run:	unit_test
	./$(TEST_NAME)
	$(COVR) --exclude $(DIR_TEST)
	$(COVR) --exclude $(DIR_TEST) --branch

re: fclean all

.PHONY:	all clean fclean re