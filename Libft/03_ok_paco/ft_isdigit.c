/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:35:11 by dcara-mu          #+#    #+#             */
/*   Updated: 2023/05/04 15:03:08 by dcara-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c > 47 && c < 58);
}

/*int	main(void)
{
	printf("%i", ft_isdigit('J'));
}*/
