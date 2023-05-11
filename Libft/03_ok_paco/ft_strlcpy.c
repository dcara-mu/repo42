/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:07:57 by dcara-mu          #+#    #+#             */
/*   Updated: 2023/05/10 17:00:03 by dcara-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Opción 2 -  no funciona:
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	nbytes;
	size_t	i;

	if (dstsize > 0)
	{
		i = 0;
		nbytes = dstsize - 1;
		while (i < nbytes)
		{
			*(dst + i) = *(src + i);
			i++;
		}
		dst[nbytes] = '\0';
	}
	return (ft_strlen(src));
} */

//Opción 1:
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	nbytes;

	srclen = ft_strlen(src);
	if (dstsize > 0)
	{
		nbytes = dstsize - 1;
		if (nbytes > srclen)
			nbytes = srclen;
		ft_memcpy(dst, src, nbytes);
		dst[nbytes] = '\0';
	}
	return (srclen);
}

/*La función strlcpy copia una cadena de caracteres en un búfer de destino, 
asegurándose de que no se produzca un desbordamiento de búfer al limitar la 
longitud de la copia.*/

/* Chat GPT dice:
size_t strlcpy(char *dst, const char *src, size_t size) {
    size_t srclen = strlen(src); // Obtiene la longitud de la cadena de origen
    if (size > 0) { // Si el tamaño del destino es mayor que cero
        size_t n = size - 1; // Calcula el número de bytes que se pueden copiar
        if (n > srclen) // Si hay suficiente espacio para copiar toda la cadena de origen
            n = srclen;
        memcpy(dst, src, n); // Copia los primeros n bytes de la cadena de origen en el destino
        dst[n] = '\0'; // Añade el carácter nulo al final de la cadena de destino
    }
    return srclen; // Devuelve la longitud de la cadena de origen
} */
