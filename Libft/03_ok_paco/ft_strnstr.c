/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:21:29 by dcara-mu          #+#    #+#             */
/*   Updated: 2023/05/25 10:54:19 by dcara-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;

	n = ft_strlen(needle);
	if (*needle == 0)
		return ((char *) haystack);
	while (*haystack && len >= n)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, n) == 0)
			return ((char *) haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

/*
Valores devueltos:
**
Opción 1: si la aguja está vacía, devuelve pajar
**
Opción 2: si la aguja no aparace, se devuelve NULL
**
Opción 3: en cualquier otro caso, se devuelve un puntero al primer carácter
de la primera aparición de aguja
	Sub-opción 3A: len <= el tamaño del pajar --> condición operativa
	Sub-opción 3B: len > el tamaño del pajar --> no operativo
*/