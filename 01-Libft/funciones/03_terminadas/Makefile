# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 16:43:23 by dcara-mu          #+#    #+#              #
#    Updated: 2023/05/04 18:39:14 by dcara-mu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Este 'makefile' es el necesario para el proyecto libft.a

NAME    = libft.a
FILES   =	ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c
OBJECTS = $(FILES:.c=.o)
FLAGS   = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	echo "¡La compilación ha concluido con éxito!"
$(OBJECTS): $(FILES)
	gcc $(FLAGS) -c $(FILES)

clean:
	rm -f $(OBJECTS)
	echo "Se han borrado los objetos"
fclean:
	rm -f $(NAME) $(OBJECTS)
	echo "Se han borrado los objetos y el programa ha sido eliminado"
re: fclean all

.PHONY: re all fclean clean
.SILENT: