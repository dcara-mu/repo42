/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:29:15 by dcara-mu          #+#    #+#             */
/*   Updated: 2023/05/03 15:50:03 by dcara-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((ft_isdigit(c)) + (ft_isalpha(c)));
}

/*int	main(void)
{
	printf("%i", ft_isalnum('+'));
	printf("%i", ft_isalnum('5'));
	printf("%i", ft_isalnum('a'));
}*/
