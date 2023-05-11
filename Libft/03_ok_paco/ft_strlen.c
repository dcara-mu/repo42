/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:58:38 by dcara-mu          #+#    #+#             */
/*   Updated: 2023/05/10 16:58:14 by dcara-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* int	main(void)
{
	printf("%s", "Tu cadena tiene ");
	printf("%zu", ft_strlen("Lo estas haciendo BIEN"));
	printf("%s", " caracteres"); 
}*/

/*La función strlen() calcula la longitud de la cadena s.
La función strlen() devuelve el número de caracteres que preceden al 
carácter NUL de terminación.*/