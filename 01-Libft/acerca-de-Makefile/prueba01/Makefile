# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 12:26:54 by dcara-mu          #+#    #+#              #
#    Updated: 2023/04/28 12:26:58 by dcara-mu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprueba1.a
FILES = ft1.c\
OBJECTS = $(FILES:.c=.o)
FLAGS = -Wall -Wextra -Werror

all:$(NAME)
	
$(NAME):$(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
$(OBJECTS):$(FILES)
	gcc $(FLAGS) -c $(FILES)

clean:
	rm -F $(OBJECTS)

fclean:
	rm -F $(NAME) $(OBJECTS)

re: fclean all

.PHONY: re all fclean clean