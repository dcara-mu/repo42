/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:29:32 by dcara-mu          #+#    #+#             */
/*   Updated: 2023/05/24 11:33:22 by dcara-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dst);
}

/* int	main(void)
{
	printf("%s", ft_memcpy("Hola mundo", "Arde la calle ASDP", 4));
	printf("%s", memcpy("Hola mundo", "Arde la calle ASDP", 4));
} */

/*
La función memcpy() copia n bytes del área de memoria src al área de 
memoria dst. Si dst y src se superponen, el comportamiento no está definido. 
Las aplicaciones en las que dst y src pueden superponerse deberían usar 
memmove en su lugar.
**
La función memcpy() devuelve el valor original de dst.
*/