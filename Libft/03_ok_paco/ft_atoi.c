/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcara-mu <dcara-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:56:38 by dcara-mu          #+#    #+#             */
/*   Updated: 2023/05/25 16:07:03 by dcara-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Opción C: */
int	ft_atoi(const char *str)
{
	int		pon;
	int		cav;

	pon = 1;
	cav = 0;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			pon = -1;
		str++;
	}
	while (ft_isdigit(*str) == 1)
	{
		cav = cav * 10 + (*str - '0');
		str++;
	}
	return (pon * cav);
}

/* Opción A:
int	ft_atoi(const char *str)
{
	int		pon;
	int		cav;

	pon = 1;
	cav = 0;
	while (*str)
	{
		if (*str == '\e')
			return (0);
		if (*str == '-')
			pon = -1;
		if (ft_isdigit(*str) == 1)
			cav = cav * 10 + (*str - '0');
		str++;
	}
	return (pon * cav);
} */

/* Opción B:
int	ft_atoi(const char *str)
{
	int		pon;
	int		cav;

	pon = 1;
	cav = 0;
	while (str && ft_isprint(*str) == 0)
	{
		if (*str == '\e')
			return (0);
		str++;
	}
	while (str && ft_isprint(*str) == 1)
	{
		if (*str == '-')
			pon = -1;
		if (ft_isdigit(*str) == 1)
			cav = cav * 10 + (*str - '0');
		str++;
	}
	return (pon * cav);
}*/
