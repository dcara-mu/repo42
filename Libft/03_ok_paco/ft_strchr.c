/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:02:36 by dcara-mu          #+#    #+#             */
/*   Updated: 2023/05/11 13:28:15 by dcara-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Opción 1 - no crashea cuando debería, cuando c == '\0' || s == '\0'
/* char	*ft_strchr(const char *s, int c)
{
	char    *ptr;

	ptr = (char *) s;
	while (*ptr != '\0')
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
} */

// Opción 2 - provoca BUS ERROR, pero funciona cuando no existe la cadena
/* char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *) s;
	while (*ptr != c || *ptr != '\0')
		ptr++;
	return (ptr);
} */

//Opción 3:
char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *) s;
	while (*ptr != c)
	{
		if (*ptr == '\0')
			return (NULL);
		ptr++;
	}
	return (ptr);
}
