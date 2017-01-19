##
## Makefile for shell in /home/slejeune/Shell_Programming/PSU_2016_minishell1
## 
## Made by Simon
## Login   <simon.lejeune@epitech.eu>
## 
## Started on  Thu Jan 19 10:17:10 2017 Simon
## Last update Thu Jan 19 11:11:55 2017 Simon
##

SRC	=	src/shell.c \
		src/functions.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Iinclude

NAME	=	mysh


all	:	$(NAME)

$(NAME)	:	$(OBJ)
		gcc $(OBJ) -o $(NAME) -L./include -lgnl

clean	:
		rm -f $(NAME)

fclean	:	clean
		rm -f $(OBJ)

re	:	fclean all
