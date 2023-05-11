/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:54:25 by dcara-mu          #+#    #+#             */
/*   Updated: 2023/05/08 17:42:33 by dcara-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*pd;
	char	*ps;

	pd = (char *)dst;
	ps = (char *)src;
	if (!dst && !src)
		return (0);
	if (pd < ps)
		while (n--)
			*pd++ = *ps++;
	else
	{
		pd += n;
		ps += n;
		while (n--)
			*--pd = *--ps;
	}
	return (dst);
}

/* void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len - 1;
	if (!dst && !src)
		return (0);
	while (i < len)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i--;
	}
	return (dst);
} */

/* int	main(void)
{
	printf("%s", ft_memmove("tabaco", "compra", 6));
	printf("%s", memmove("tabaco", "compra", 6));
} */

/*La función memmove() copia len bytes de la cadena src a la cadena dst.
Las dos cadenas pueden superponerse; la copia siempre se realiza de forma 
no destructiva.*/

/* 	i  0  1  2  3  4  5  6
dst = {t, a, b, a, c, o,\0}
src =             {c, o, m, p, r, a}
len = 6

en memoria -> t/a/b/a/c/o/m/p/r/a */


/* ChatGPT dice:

void *memmove(void *dest, const void *src, size_t n) {
    char *pd = (char *)dest; // Casting a un puntero char para poder operar byte a byte
    const char *ps = (const char *)src; // Casting a un puntero char constante
    if (pd <= ps) { // Si el destino está después del origen o son iguales
        while (n--) { // Se recorre el bloque de memoria desde el inicio al final
            *pd++ = *ps++; // Se copia el byte del origen al destino y se incrementan los punteros
        }
    } else { // Si el destino está antes del origen
        pd += n; // Se mueven los punteros al final de los bloques
        ps += n;
        while (n--) { // Se recorre el bloque de memoria desde el final al inicio
            *--pd = *--ps; // Se copia el byte del origen al destino y se decrementan los punteros
        }
    }
    return dest; // Se devuelve un puntero al destino
} */
