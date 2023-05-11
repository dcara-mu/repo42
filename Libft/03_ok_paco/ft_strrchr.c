/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:41:04 by dcara-mu          #+#    #+#             */
/*   Updated: 2023/05/11 18:03:33 by dcara-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Opción 1:
/* char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*ptr != c)
	{
		if (*ptr == s)
			return (NULL);
		ptr;
	}
	return (ptr);
} */

//Opción 2:
/* char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			ptr = (char *) s;
		s++;
	}
	if (ptr != NULL)
		return (ptr);
	return (NULL);
} */

//Opción 3:
char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			ptr = (char *) s;
		s++;
	}
	if (ptr != NULL)
		return (ptr);
	return (NULL);
}
