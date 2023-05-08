# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 16:43:23 by dcara-mu          #+#    #+#              #
#    Updated: 2023/05/04 11:25:26 by dcara-mu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Este 'makefile' automatiza los procesos de compilación previos a la
# comprobación de las funciones del proyecto 'libft.a'

NAME    = comprueba_tu_mierda
FILES   = ./*.c
LA_COMP = gcc -Wall -Wextra

all: $(NAME)
$(NAME): $(FILES)
	$(LA_COMP) $(FILES) -o $(NAME)
	echo "¡La compilación ha concluido con éxito!"
	echo "Aquí está tu mierda:"
	./comprueba_tu_mierda
	echo
	
finish:
	mv ./*.c ../03_terminadas
	echo "Tu función se ha movido al directorio 03_terminadas"
	rm comprueba_tu_mierda
	echo "Y se ha eliminado tu mierda"

re: all finish

.PHONY: all finish re
.SILENT:
