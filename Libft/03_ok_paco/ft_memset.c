/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:39:02 by dcara-mu          #+#    #+#             */
/*   Updated: 2023/05/04 15:18:29 by dcara-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char) c;
		i++;
	}
	return (b);
}

/* int	main(void)
{
	printf("%s", ft_memset("Lo estas haciendo BIEN", 'M', 8));
} */

/*La función memset() escribe len bytes del valor c (convertido a un carácter 
sin signo) en la cadena b.

La función memset() devuelve su primer argumento. ¿qué significa?
Creo que significa que la función devuelve un PUNTERO con ciertas
órdenes encapsuladas en el prototipo de la función*/