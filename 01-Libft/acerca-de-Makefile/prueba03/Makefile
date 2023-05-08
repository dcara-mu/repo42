# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 16:43:23 by dcara-mu          #+#    #+#              #
#    Updated: 2023/04/28 17:43:07 by dcara-mu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
FILES   = ft7.c \
		  ft8.c \
		  ft9.c
OBJECTS = $(FILES:.c=.o)
FLAGS   = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)
	@echo "¡La compilación ha concluido con éxito!"
$(OBJECTS): $(FILES)
	@gcc $(FLAGS) -c $(FILES)

.PHONY: re all fclean clean
clean:
	@rm -f $(OBJECTS)
	@echo "Se han borrado los objetos"
fclean:
	@rm -f $(NAME) $(OBJECTS)
	@echo "Se han borrado los objetos y el programa se fue a la puta"
re: fclean all