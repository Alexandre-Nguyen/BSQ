##
## Makefile for makefile in /home/nguye_0/rendu/CPE_2015_bsq
##
## Made by alexandre2 nguyen
## Login   <nguye_0@epitech.net>
##
## Started on  Tue Nov 24 15:06:49 2015 alexandre2 nguyen
## Last update Sun Dec 20 22:25:56 2015 alexandre2 nguyen
##

CC	= gcc

RM	= rm -f

CFLAGS += -Wextra -Wall -Werror
CFLAGS += -ansi -pedantic

LDFLAGS	=

NAME	= bsq

SRCS	= sources/base.c \
	  sources/calc.c \
	  sources/bsq.c \

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	 $(CC) $(SRCS) -o $(NAME) $(LDFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
