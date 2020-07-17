##
## EPITECH PROJECT, 2018
## CPE_matchstick_2018
## File description:
## Makefile
##

SRC	=	main.c		\
		my_getnbr.c	\
		my_putchar.c	\
		my_putstr.c	\
		first_file.c	\
		my_put_nbr.c	\
		second_file.c	\
		third_file.c	\
		is_num.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

CFLAGS	=	-g -g3 -ggdb -I ./include

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all
